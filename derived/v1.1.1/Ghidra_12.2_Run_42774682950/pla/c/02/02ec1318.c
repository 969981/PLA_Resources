/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec1318; name: FUN_02ec1318
 */


undefined8 FUN_02ec1318(long *param_1,long param_2,long *param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  ushort uVar5;
  long lVar6;
  
  if ((param_1[9] != param_3[2]) || ((int)param_1[0xb] != *(int *)((long)param_3 + 0x1c))) {
    FUN_02ec10a4(param_1);
  }
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(int *)(param_1 + 0xd) = (int)param_3[4];
  param_1[8] = 0;
  *(int *)((long)param_1 + 0x54) = (int)param_3[3];
  bVar2 = *(byte *)((long)param_3 + 9);
  if (*(byte *)(param_3 + 1) - 0x80 < 0x21) {
    uVar5 = 0xff;
    if ((1L << ((ulong)(*(byte *)(param_3 + 1) - 0x80) & 0x3f) & 0x100010001U) != 0) {
      uVar5 = (ushort)*(byte *)((long)param_3 + 10);
    }
  }
  else {
    uVar5 = 0xff;
  }
  *(int *)((long)param_1 + 0x7c) = param_5;
  *(ushort *)(param_1 + 10) = uVar5 | (ushort)bVar2 << 8;
  *(undefined1 *)(param_1 + 10) = 0xff;
  if (param_5 == 3) goto LAB_02ec13cc;
  lVar3 = *param_3;
  param_1[8] = lVar3;
  if (param_5 == 1) {
LAB_02ec1490:
    uVar5 = 0xff;
    if ((*(byte *)(param_3 + 1) - 0x80 < 0x21) &&
       ((1L << ((ulong)(*(byte *)(param_3 + 1) - 0x80) & 0x3f) & 0x100010001U) != 0)) {
      uVar5 = (ushort)*(byte *)((long)param_3 + 10);
    }
    *(ushort *)(param_1 + 10) = uVar5 | (ushort)*(byte *)((long)param_3 + 9) << 8;
    if ((param_1[9] == 0) && (param_3[2] != 0)) {
      param_1[9] = param_3[2];
      FUN_02e7b4cc();
    }
    FUN_02ec1564(param_1,param_4);
    iVar1 = *(int *)((long)param_3 + 0x1c);
    *(int *)(param_1 + 0xb) = iVar1;
    if ((((*(char *)((long)param_1 + 0x51) == -1) && (iVar1 == 0)) && ((char)param_1[10] == -1)) &&
       (param_1[3] == 0)) {
      *(undefined4 *)((long)param_1 + 0x7c) = 2;
      lVar6 = param_3[5];
      if (lVar6 != 0) goto LAB_02ec1458;
    }
LAB_02ec14f4:
    lVar3 = param_1[8];
  }
  else {
    if (param_5 != 2) {
      param_1[3] = param_3[5];
      goto LAB_02ec1490;
    }
    lVar6 = param_3[5];
    if (lVar6 != 0) {
LAB_02ec1458:
      plVar4 = (long *)FUN_02ec1e94(param_1 + 4);
      if (plVar4 != (long *)0x0) {
        *plVar4 = lVar6;
      }
      goto LAB_02ec14f4;
    }
  }
  if ((lVar3 == 0) && (*(undefined4 *)((long)param_1 + 0x7c) = 3, param_1[4] != 0)) {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_02f59e60(0);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
LAB_02ec13cc:
  lVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1[2] + 0x30))((long *)param_1[2],lVar3,param_1);
  (**(code **)(*param_1 + 0x28))(param_1);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(lVar3 + 8);
  (**(code **)(*param_1 + 0x30))(param_1);
  return 1;
}


