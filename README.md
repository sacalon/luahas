# LuaHas
Lua interpreter for [Hascal programming language](https://github.com/hascal/hascal)

## Install
Requirements :
- [Latest Hascal compiler](https://github.com/hascal/hascal/releases)
- [Hascal's requirements](https://hascal.github.io/docs/latest/lang/1_install.html)

```
$ hascal get github.com/bistcuite/luahas luahas
```

## Example
```typescript
use luahas

function main():int {
	lua_exec("print 'hello world'")
	return 0
}
```
Compile and run :
```bash
$ hascal example.has
$ ./example
hello world
```

## License
**MIT**
