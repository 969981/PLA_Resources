/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825670; name: _INIT_125
 */


void _INIT_125(void)

{
  undefined8 uVar1;
  
  uVar1 = nn::os::GetSystemTickFrequency();
  *(undefined8 *)PTR_DAT_043774c8 = uVar1;
  return;
}


