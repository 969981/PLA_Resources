/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f66ec; name: FUN_029f66ec
 */


void FUN_029f66ec(long param_1,undefined2 *param_2,byte *param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 local_80;
  undefined2 local_78;
  undefined4 local_58 [2];
  
  *param_2 = 0;
  uVar10 = (ulong)*(uint *)(param_3 + 4);
  if (*(uint *)(param_3 + 4) != 0) {
    lVar8 = (&DAT_0428af30)[uVar10 * 6];
    if (lVar8 == 0) {
      plVar6 = &DAT_0428af30;
    }
    else {
      plVar6 = &DAT_0428af30;
      if (*(char *)(lVar8 + 0x1e1) != '\0') {
        plVar6 = &DAT_0428af30 + uVar10 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
    if (((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar7 != 0)) &&
       (*(char *)((long)piVar1 + uVar7) != '\0')) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x120;
      uVar9 = *(undefined8 *)(lVar8 + (ulong)*param_3 * 8);
      lVar5 = *(long *)(lVar8 + (ulong)param_3[1] * 8);
      lVar12 = 0x7d;
      if ((*(byte *)(lVar5 + 0x87) & 0x40) != 0) {
        lVar12 = 0x28e;
      }
      lVar8 = *(long *)(lVar8 + (ulong)*(byte *)(lVar5 + lVar12) * 8);
      if (param_3[0xe] != 0) {
        bVar2 = *(byte *)(lVar8 + 0x7d);
        local_80 = ((ulong)bVar2 & 0x1f) << 3 | 0x502;
        lVar12 = *(long *)(param_1 + 0x20);
        FUN_02951ca0(lVar8,0x33,&local_80);
        FUN_02a3e6b8(*(undefined8 *)(lVar12 + 0x18),0x13,bVar2,0x33,local_80._4_4_,
                     local_80 & 0xffffffff);
        uVar10 = (ulong)*(uint *)(param_3 + 4);
      }
      if (param_3[0xc] == 0) {
        uVar11 = 7;
      }
      else {
        local_80 = CONCAT62(local_80._2_6_,*(undefined2 *)param_3);
        local_80 = CONCAT44((int)uVar10,(undefined4)local_80);
        local_78 = 0;
        FUN_029f6a40(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1cc0),local_58,&local_80);
        uVar11 = local_58[0];
      }
      FUN_02967e64(*(undefined8 *)(param_1 + 0x38),uVar10,uVar10,*(undefined4 *)(param_3 + 8),0,
                   uVar9,&local_80);
      lVar12 = *(long *)(*(long *)(param_1 + 0x60) + 0xce0);
      cVar3 = *(char *)(lVar8 + 0x7d);
      uVar4 = FUN_0296eaa8(*(undefined8 *)(lVar12 + 0x38));
      if (cVar3 != '\x1f') {
        uVar4 = FUN_0296ed7c(*(undefined8 *)(lVar12 + 0x38),cVar3);
      }
      FUN_0296a628(*(undefined8 *)(param_1 + 0x38),uVar9,lVar8,&local_80,uVar11,0x1000,0,
                   param_3[0xd] == 0,0,uVar4,param_2);
    }
  }
  return;
}


