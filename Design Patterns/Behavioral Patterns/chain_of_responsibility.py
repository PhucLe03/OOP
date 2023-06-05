class Handler(object): 
    def __init__(self, nxt):
        self._nxt = nxt
 
    def handle(self, request):
        handled = self.processRequest(request)
 
        if not handled:
            self._nxt.handle(request)
 
    def processRequest(self, request):
        raise NotImplementedError('First implement!')
 
 
class FirstConcreteHandler(Handler):
 
    def processRequest(self, request):
        if 'a' <= request <= 'e':
            print("{}: request '{}' is being handled".format(self.__class__.__name__, request))
            return True
 
 
class SecondConcreteHandler(Handler): 
    def processRequest(self, request):
        if 'e' < request <= 'l':
            print("{}: request '{}' is being handled".format(self.__class__.__name__, request))
            return True
 
class ThirdConcreteHandler(Handler):
    def processRequest(self, request):
        if 'l' < request <= 'z':
            print("{}: request '{}' is being handled".format(self.__class__.__name__, request))
            return True
 
class DefaultHandler(Handler):
    def processRequest(self, request):
        print("{}: request '{}' has no handler.".format(self.__class__.__name__, request))
        return True
 
 
class User:
    def __init__(self):
        initial = None
        self.handler = FirstConcreteHandler(SecondConcreteHandler(ThirdConcreteHandler(DefaultHandler(initial))))
 
    def agent(self, user_request):
        for request in user_request:
            self.handler.handle(request)
 
if __name__ == "__main__":
    user = User()
    string = "cse-hcmut"
    requests = list(string)
    user.agent(requests)