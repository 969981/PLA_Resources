/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cd944; name: FUN_032cd944
 */


void FUN_032cd944(long param_1,long *param_2,code *param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 != (long *)0x0) {
    lVar2 = *(long *)(param_1 + 8);
    do {
      if (0 < param_2[3] * lVar2) {
        uVar3 = param_2[2];
        uVar1 = uVar3 + param_2[3] * lVar2;
        do {
          (*param_3)(uVar3,lVar2,0,param_4,param_5);
          lVar2 = *(long *)(param_1 + 8);
          uVar3 = uVar3 + lVar2;
        } while (uVar3 < uVar1);
      }
      param_2 = (long *)*param_2;
    } while (param_2 != (long *)0x0);
  }
  return;
}


