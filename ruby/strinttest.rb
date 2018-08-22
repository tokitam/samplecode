#!/usr/bin/ruby

a = 'test'

class String
      def hello
          return 'hello'
      end
end

class AString < String
      def hey
          print 'hey';
      end
end

p a.hello

p a

p String

b = AString.new("b")

p b.hello
b.hey




