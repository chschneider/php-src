<?php

/** @generate-class-entries */

/** @genstubs-expose-comment-block
 * Interprets an XML file into an object
 * @param string $filename Path to the XML file
 * @param string|null $class_name You may use this optional parameter so that simplexml_load_file will return an object of the specified class. That class should extend the SimpleXMLElement class.
 * @param int $options Bitwise OR of the libxml option constants.
 * @param string $namespace_or_prefix Namespace prefix or URI.
 * @param bool $is_prefix true if namespace_or_prefix is a prefix, false if it's a URI; defaults to false.
 * @return SimpleXMLElement|false
 */
function simplexml_load_file(string $filename, ?string $class_name = SimpleXMLElement::class, int $options = 0, string $namespace_or_prefix = "", bool $is_prefix = false): SimpleXMLElement|false {}

/** @genstubs-expose-comment-block
 * Interprets a string of XML into an object
 * @param string $data A well-formed XML string
 * @param string|null $class_name You may use this optional parameter so that simplexml_load_string will return an object of the specified class. That class should extend the SimpleXMLElement class.
 * @param int $options Bitwise OR of the libxml option constants.
 * @param string $namespace_or_prefix Namespace prefix or URI.
 * @param bool $is_prefix true if namespace_or_prefix is a prefix, false if it's a URI; defaults to false.
 * @return SimpleXMLElement|false
 */
function simplexml_load_string(string $data, ?string $class_name = SimpleXMLElement::class, int $options = 0, string $namespace_or_prefix = "", bool $is_prefix = false): SimpleXMLElement|false {}

/** @genstubs-expose-comment-block
 * Get a SimpleXMLElement object from an XML or HTML node
 * @param object $node A DOM Element node
 * @param string|null $class_name You may use this optional parameter so that simplexml_import_dom will return an object of the specified class. That class should extend the SimpleXMLElement class.
 * @return SimpleXMLElement|null
 */
function simplexml_import_dom(object $node, ?string $class_name = SimpleXMLElement::class): ?SimpleXMLElement {}

/** @not-serializable */
class SimpleXMLElement implements Stringable, Countable, RecursiveIterator
{
    /** @tentative-return-type */
    public function xpath(string $expression): array|null|false {}

    /** @tentative-return-type */
    public function registerXPathNamespace(string $prefix, string $namespace): bool {}

    /** @tentative-return-type */
    public function asXML(?string $filename = null): string|bool {}

    /**
     * @tentative-return-type
     * @alias SimpleXMLElement::asXML
     */
    public function saveXML(?string $filename = null): string|bool {}

    /** @tentative-return-type */
    public function getNamespaces(bool $recursive = false): array {}

    /** @tentative-return-type */
    public function getDocNamespaces(bool $recursive = false, bool $fromRoot = true): array|false {}

    /** @tentative-return-type */
    public function children(?string $namespaceOrPrefix = null, bool $isPrefix = false): ?SimpleXMLElement {}

    /** @tentative-return-type */
    public function attributes(?string $namespaceOrPrefix = null, bool $isPrefix = false): ?SimpleXMLElement {}

    public function __construct(string $data, int $options = 0, bool $dataIsURL = false, string $namespaceOrPrefix = "", bool $isPrefix = false) {}

    /** @tentative-return-type */
    public function addChild(string $qualifiedName, ?string $value = null, ?string $namespace = null): ?SimpleXMLElement {}

    /** @tentative-return-type */
    public function addAttribute(string $qualifiedName, string $value, ?string $namespace = null): void {}

    /** @tentative-return-type */
    public function getName(): string {}

    public function __toString(): string {}

    public function __debugInfo(): ?array {}

    /** @tentative-return-type */
    public function count(): int {}

    /** @tentative-return-type */
    public function rewind(): void {}

    /** @tentative-return-type */
    public function valid(): bool {}

    /** @tentative-return-type */
    public function current(): SimpleXMLElement {}

    /** @tentative-return-type */
    public function key(): string {}

    /** @tentative-return-type */
    public function next(): void {}

    /** @tentative-return-type */
    public function hasChildren(): bool {}

    /** @tentative-return-type */
    public function getChildren(): ?SimpleXMLElement {}
}

class SimpleXMLIterator extends SimpleXMLElement
{
}
