/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e8f70; name: FUN_001e8f70
 */


void FUN_001e8f70(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int local_38;
  int local_34;
  
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0xd8), lVar2 != 0)) {
    if (param_2 != -1) {
      local_38 = param_2;
      lVar1 = FUN_001e0c94(lVar2 + 0xb8,&local_38,4);
      if (lVar1 != 0) {
        if (*(code **)(lVar2 + 0x60) != (code *)0x0) {
          (**(code **)(lVar2 + 0x60))
                    (param_1,param_2,4,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar1 + 0x28));
        }
        local_34 = param_2;
        FUN_001e0bf0(lVar2 + 0xb8,&local_34,4);
      }
    }
  }
  return;
}


