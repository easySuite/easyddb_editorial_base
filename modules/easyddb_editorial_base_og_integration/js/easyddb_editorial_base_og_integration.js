(function($) {
  $(document).ready(function() {
    $('#edit-field-editorial-base select option').each(function(index, data) {
      var $option_id = $(data).attr('value');
      if ($option_id !== '_none') {
        if (Drupal.settings.easyddb_editorial_base_og[$option_id].disabled) {
          $(data).attr('disabled', 'disabled');
        }
      }
    });
  });
}(jQuery));
