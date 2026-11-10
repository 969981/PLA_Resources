/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008a9b24; name: FUN_008a9b24
 */


undefined8 FUN_008a9b24(long param_1)

{
  long lVar1;
  long *plVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  short *psVar8;
  
  iVar5 = *(int *)(param_1 + 0xb58);
  if (iVar5 == 2) {
    pcVar7 = *(code **)(param_1 + 0xa8);
    uVar6 = *(ulong *)(param_1 + 0xb0);
    goto joined_r0x008a9c68;
  }
  do {
    if (iVar5 == 1) {
      piVar4 = *(int **)(param_1 + 0x88);
    }
    else {
      if (iVar5 != 0) {
        return 1;
      }
      piVar4 = *(int **)(param_1 + 0x88);
      if (piVar4[1] == *piVar4) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0xb58) = 1;
    }
    sVar3 = FUN_02a3d074(piVar4,param_1 + 0xc0,0x10,0);
    *(short *)(param_1 + 0xbc) = sVar3;
    if (sVar3 == 0xaa) {
      return 1;
    }
    psVar8 = &DAT_041b46e8;
    uVar6 = 4;
    do {
      if (psVar8[-0x18] == sVar3) {
        uVar6 = uVar6 - 4;
LAB_008a9c0c:
        lVar1 = (uVar6 & 0xffffffff) * 0x18;
        pcVar7 = *(code **)(lVar1 + 0x41b46c0);
        uVar6 = *(ulong *)(lVar1 + 0x41b46c8);
        goto LAB_008a9c18;
      }
      if (psVar8[-0xc] == sVar3) {
        uVar6 = uVar6 - 3;
        goto LAB_008a9c0c;
      }
      if (*psVar8 == sVar3) {
        uVar6 = uVar6 - 2;
        goto LAB_008a9c0c;
      }
      if (psVar8[0xc] == sVar3) {
        uVar6 = uVar6 - 1;
        goto LAB_008a9c0c;
      }
      if (psVar8[0x18] == sVar3) goto LAB_008a9c0c;
      uVar6 = uVar6 + 5;
      psVar8 = psVar8 + 0x3c;
    } while (uVar6 != 0xae);
    pcVar7 = (code *)0x0;
    uVar6 = 0;
LAB_008a9c18:
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(code **)(param_1 + 0xa8) = pcVar7;
    *(ulong *)(param_1 + 0xb0) = uVar6;
    if (pcVar7 != (code *)0x0 || uVar6 != 0 && ((uVar6 & 1) != 0 || pcVar7 != (code *)0x0)) {
      *(int *)(param_1 + 0xb58) = *(int *)(param_1 + 0xb58) + 1;
joined_r0x008a9c68:
      plVar2 = (long *)(param_1 + ((long)uVar6 >> 1));
      if ((uVar6 & 1) != 0) {
        pcVar7 = *(code **)(pcVar7 + *plVar2);
      }
      uVar6 = (*pcVar7)(plVar2,param_1 + 0xb8,param_1 + 0xc0);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
    }
    iVar5 = 1;
    *(undefined4 *)(param_1 + 0xb58) = 1;
  } while( true );
}


