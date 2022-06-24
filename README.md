# Usage

Add the following line to `Cargo.toml`.

``` toml
tree-sitter-cql = "0.0.1"
```

## Regenerate

1. Make changes to grammar.js
2. Run `cargo install tree-sitter-cli`
3. Ensure that `.cargo/bin` is in your $PATH
4. Install nodejs. Possibly `pacman -Syu nodejs` or `apt-get install nodejs`.
5. Run `tree-sitter generate`
