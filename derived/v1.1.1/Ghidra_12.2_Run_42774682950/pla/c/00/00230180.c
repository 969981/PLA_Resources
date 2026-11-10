/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00230180; name: FUN_00230180
 */


void FUN_00230180(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  puVar2 = PTR_DAT_04372a80;
  *(undefined1 *)(param_1 + 6) = 0;
  plVar1 = param_1 + 3;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = (long)plVar1;
  param_1[4] = (long)plVar1;
  param_1[5] = param_2 + 8;
  if (*(short *)(param_2 + 0x2a) != 0) {
    uVar6 = 0;
    lVar5 = param_2 + 0x2c;
    do {
      lVar3 = (**(code **)(*param_3 + 0x78))(param_3,lVar5,1);
      if ((lVar3 != 0) && (plVar4 = (long *)FUN_00232654(0x18), plVar4 != (long *)0x0)) {
        *plVar4 = (long)plVar4;
        plVar4[1] = (long)plVar4;
        plVar4[2] = lVar3;
        *plVar4 = *plVar1;
        plVar4[1] = (long)plVar1;
        *(long **)(*plVar1 + 8) = plVar4;
        *plVar1 = (long)plVar4;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar6 < *(ushort *)(param_2 + 0x2a));
  }
  return;
}


