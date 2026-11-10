/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef5c5c; name: FUN_02ef5c5c
 */


void FUN_02ef5c5c(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar1 != 0)) {
    if (param_2 == 0) {
      if (param_4 == 0) {
        do {
          (**(code **)(*(long *)(lVar1 + -0x18) + 0x38))((long *)(lVar1 + -0x18),param_3);
          lVar1 = *(long *)(lVar1 + 0x48);
        } while (lVar1 != 0);
      }
      else {
        do {
          if (*(int *)(lVar1 + 0x1f8) == param_4) {
            (**(code **)(*(long *)(lVar1 + -0x18) + 0x38))((long *)(lVar1 + -0x18),param_3);
          }
          lVar1 = *(long *)(lVar1 + 0x48);
        } while (lVar1 != 0);
      }
    }
    else {
      do {
        if ((*(long *)(lVar1 + 0x10) == param_2) &&
           ((param_4 == 0 || (*(int *)(lVar1 + 0x1f8) == param_4)))) {
          (**(code **)(*(long *)(lVar1 + -0x18) + 0x38))((long *)(lVar1 + -0x18),param_3);
        }
        lVar1 = *(long *)(lVar1 + 0x48);
      } while (lVar1 != 0);
    }
  }
  return;
}


