/**
 * Ckeditor custom config file.
 */

if (typeof CKEDITOR !== 'undefined') {
  CKEDITOR.on('dialogDefinition', function (ev) {
    // Take the dialog name and its definition from the event data.
    var dialogName = ev.data.name;
    var dialogDefinition = ev.data.definition;

    // Check if the definition is from the dialog window you are interested in (the "Link" dialog window).
    if (dialogName == 'link') {
      // Get a reference to the "Link Info" tab.
      var infoTab = dialogDefinition.getContents('info');

      // Set the default https for the Protocol field.
      var protocolField = infoTab.get('protocol');
      protocolField['default'] = 'https://';
    }
  });
}
