/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00229dc4; name: FUN_00229dc4
 */


void FUN_00229dc4(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  char acStack_130 [256];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  if (uVar1 != 0x4e414c46) {
    nn::util::SNPrintf(acStack_130,0x100,
                       "Signature check failed (\'%c%c%c%c\' must be \'%c%c%c%c\').",
                       (ulong)(uVar1 >> 0x18),(ulong)(uVar1 >> 0x10 & 0xff),
                       (ulong)(uVar1 >> 8 & 0xff),(ulong)(uVar1 & 0xff),0x4e,0x41,0x4c,0x46);
  }
  *param_1 = param_2;
  if ((short)param_2[4] == 0) {
    return;
  }
  uVar1 = 0;
  piVar2 = (int *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + 6));
  iVar3 = *piVar2;
  if (iVar3 != 0x31746170) goto LAB_00229eb4;
LAB_00229ecc:
  plVar4 = param_1 + 2;
LAB_00229e8c:
  do {
    *plVar4 = (long)piVar2;
    do {
      piVar2 = (int *)((long)piVar2 + (ulong)(uint)piVar2[1]);
      uVar1 = uVar1 + 1;
      if ((ushort)param_2[4] <= uVar1) {
        return;
      }
      iVar3 = *piVar2;
      if (iVar3 == 0x31746170) goto LAB_00229ecc;
LAB_00229eb4:
      if (iVar3 == 0x31696170) {
        plVar4 = param_1 + 1;
        goto LAB_00229e8c;
      }
    } while (iVar3 != 0x31686170);
    plVar4 = param_1 + 3;
  } while( true );
}


