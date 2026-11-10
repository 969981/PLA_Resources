/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00161510; name: FUN_00161510
 */


void FUN_00161510(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  lVar1 = (*(code *)*puVar2)(puVar2[1]);
  if ((param_4 == 0) || (lVar1 != 0)) {
LAB_00161574:
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = -param_3;
    }
    puVar2[3] = lVar1 + param_4 + puVar2[3];
    return;
  }
  if (puVar2[0x1a] != 0) {
    FUN_0015dde0(param_1,1);
    lVar1 = (*(code *)*puVar2)(puVar2[1],param_2,param_3,param_4);
    if (lVar1 != 0) goto LAB_00161574;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0015a320(param_1,4);
}


