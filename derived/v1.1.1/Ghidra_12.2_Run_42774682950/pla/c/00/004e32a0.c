/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e32a0; name: FUN_004e32a0
 */


ushort * FUN_004e32a0(undefined8 *param_1,int param_2,uint param_3,ulong *param_4)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    puVar1 = (ushort *)*param_1;
    if (param_2 != 2) {
      uVar3 = 0;
      if (*puVar1 == param_3) goto LAB_004e3304;
      do {
        do {
          uVar3 = uVar3 + 1;
          puVar1 = puVar1 + 0x1c;
          if (uVar2 <= uVar3) {
            return (ushort *)0x0;
          }
        } while (*puVar1 != param_3);
LAB_004e3304:
      } while ((*(int *)(puVar1 + 2) != param_2) && (*(int *)(puVar1 + 2) != 2));
LAB_004e3318:
      if (param_4 == (ulong *)0x0) {
        return puVar1;
      }
      *param_4 = uVar3;
      return puVar1;
    }
    uVar3 = 0;
    do {
      if (*puVar1 == param_3) goto LAB_004e3318;
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 0x1c;
    } while (uVar3 < uVar2);
  }
  return (ushort *)0x0;
}


