/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e505b0; name: FUN_02e505b0
 */


undefined8
FUN_02e505b0(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,undefined4 *param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  *param_3 = param_1;
  *param_4 = 0;
  *param_5 = 0x3f800000;
  uVar1 = (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar2 = *(long **)(param_1 + 0x28);
    plVar4 = plVar2;
    do {
      lVar3 = *plVar4;
      if (*(char *)(lVar3 + 0x690) != '\0') {
        uVar1 = FUN_02e5499c(lVar3,param_2,param_3,param_4,param_5);
        if ((uVar1 & 1) != 0) {
          return *(undefined8 *)(lVar3 + 0x40);
        }
        plVar2 = *(long **)(param_1 + 0x28);
        uVar1 = (ulong)*(uint *)(param_1 + 0x30);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + uVar1);
  }
  return 0xffffffffffffffff;
}


