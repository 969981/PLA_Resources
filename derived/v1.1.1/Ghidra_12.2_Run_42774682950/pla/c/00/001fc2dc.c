/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fc2dc; name: FUN_001fc2dc
 */


undefined8 FUN_001fc2dc(char *param_1)

{
  size_t sVar1;
  size_t sVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    sVar2 = strcspn(param_1,
                    "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f\x7f"
                   );
    if (sVar2 != sVar1) {
      return 3;
    }
  }
  return 0;
}


