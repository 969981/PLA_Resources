/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024956c; name: FUN_0024956c
 */


void FUN_0024956c(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  short *psVar4;
  undefined8 uVar5;
  short *psVar6;
  long *plVar7;
  long *plVar8;
  
  psVar6 = *(short **)(param_2 + 0xf8);
  if (*psVar6 == 2) {
    puVar2 = (undefined8 *)FUN_00232654(0x20);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    plVar8 = (long *)(param_1 + 0xf8);
    *plVar8 = (long)puVar2;
    uVar5 = *(undefined8 *)(psVar6 + 0xc);
    iVar1 = FUN_0028ee44(uVar5);
    plVar7 = (long *)FUN_00232654(0x48);
    if (plVar7 != (long *)0x0) {
      FUN_0028eea0(plVar7,5,3,iVar1 + -1);
      *plVar7 = (long)(PTR_DAT_04372d18 + 0x10);
    }
    FUN_002526f8(plVar7,uVar5);
    *(long **)(*plVar8 + 0x18) = plVar7;
    psVar4 = (short *)*plVar8;
  }
  else {
    if (*psVar6 != 1) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      return;
    }
    puVar2 = (undefined8 *)FUN_00232654(0x20);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    plVar7 = (long *)(param_1 + 0xf8);
    *plVar7 = (long)puVar2;
    lVar3 = FUN_00232654(0x50);
    if (lVar3 != 0) {
      FUN_00251634(0,0,lVar3,5,3,1);
    }
    FUN_00251730(lVar3,*(undefined8 *)(psVar6 + 0xc));
    *(long *)(*plVar7 + 0x18) = lVar3;
    psVar4 = (short *)*plVar7;
  }
  if (psVar4 != (short *)0x0) {
    *(undefined1 *)(param_1 + 0xf0) = 4;
    *psVar4 = *psVar6;
  }
  return;
}


