function fuzzyOutput = getCurrentLim(temp_cell, rpm_mot, energy_margin)
    %#codegen
    
    % Load the converted structure
    convertedFis = coder.load("new_temp5.mat");
    fis_struct = convertedFis.fis_struct;
    
    % Evaluate Fuzzy Controller using the structure
    fuzzyOutput = evalfis(fis_struct, [double(temp_cell), double(rpm_mot), double(energy_margin)]);
    
end