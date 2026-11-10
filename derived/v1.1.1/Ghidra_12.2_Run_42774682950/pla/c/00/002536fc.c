/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002536fc; name: FUN_002536fc
 */


void FUN_002536fc(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 extraout_b0;
  byte bVar7;
  undefined1 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar8 = NEON_ucvtf((uint)*(ushort *)(param_3 + 0xda));
  uVar9 = NEON_ucvtf((uint)*(ushort *)(param_3 + 0xdc));
  uVar10 = NEON_ucvtf((uint)*(ushort *)(param_3 + 0xde));
  uVar11 = NEON_ucvtf((uint)*(ushort *)(param_3 + 0xe0));
  local_80 = uVar8;
  uStack_7c = uVar9;
  local_78 = uVar10;
  uStack_74 = uVar11;
  FUN_00242da4();
  local_48 = CONCAT22(extraout_var_00,CONCAT11(extraout_var,extraout_b0));
  cVar2 = *(char *)(param_3 + 0x109);
  uStack_44 = param_2;
  if (cVar2 == '\b') {
    FUN_00254da4(param_3,param_4,&local_48,*(undefined8 *)(param_3 + 0x110),&local_80,
                 *(undefined1 *)(param_3 + 0x5a));
    bVar7 = *(byte *)(param_3 + 0x10a);
  }
  else if (cVar2 == '\x04') {
    FUN_00254900(param_3,param_4,&local_48,*(undefined8 *)(param_3 + 0x110),&local_80,
                 *(undefined1 *)(param_3 + 0x5a));
    bVar7 = *(byte *)(param_3 + 0x10a);
  }
  else {
    if (cVar2 == '\x01') {
      FUN_002542e4(param_3,param_4,&local_48,*(undefined8 *)(param_3 + 0x110),&local_80,
                   *(undefined1 *)(param_3 + 0x5a));
    }
    bVar7 = *(byte *)(param_3 + 0x10a);
  }
  if ((bVar7 >> 2 & 1) == 0) {
    plVar6 = *(long **)(param_3 + 0x118);
    if ((((((((*(byte *)((long)plVar6 + 0x12) >> 1 & 1) == 0) && (*(char *)(param_3 + 0xe8) == -1))
           && (*(char *)(param_3 + 0xe9) == -1)) &&
          ((*(char *)(param_3 + 0xea) == -1 && (*(char *)(param_3 + 0xeb) == -1)))) &&
         ((*(char *)(param_3 + 0xec) == -1 &&
          ((*(char *)(param_3 + 0xed) == -1 && (*(char *)(param_3 + 0xee) == -1)))))) &&
        (*(char *)(param_3 + 0xef) == -1)) &&
       (((((*(char *)(param_3 + 0xf0) == -1 && (*(char *)(param_3 + 0xf1) == -1)) &&
          (*(char *)(param_3 + 0xf2) == -1)) &&
         (((*(char *)(param_3 + 0xf3) == -1 && (*(char *)(param_3 + 0xf4) == -1)) &&
          ((*(char *)(param_3 + 0xf5) == -1 &&
           ((*(char *)(param_3 + 0xf6) == -1 && (*(char *)(param_3 + 0xf7) == -1)))))))) &&
        (*(char *)(param_3 + 0x5a) == -1)))) {
      uVar4 = FUN_002443a8(param_3);
      uVar3 = FUN_00244380(param_3);
      (**(code **)(*plVar6 + 0x20))
                (plVar6,param_4,0xff,1,1,param_3 + 0x70,param_3 + 0x50,uVar4,uVar3);
      uVar8 = 0;
    }
    else {
      uVar1 = *(undefined1 *)(param_3 + 0x5a);
      uVar4 = FUN_002443a8(param_3);
      uVar3 = FUN_00244380(param_3);
      (**(code **)(*plVar6 + 0x20))
                (plVar6,param_4,uVar1,0,1,param_3 + 0x70,param_3 + 0x50,uVar4,uVar3);
      bVar7 = *(byte *)(param_3 + 0x10a);
      lVar5 = FUN_0023e82c(*(undefined8 *)(param_3 + 0x118),param_4);
      if ((bVar7 & 1) == 0) {
        bVar7 = *(byte *)(param_3 + 0xe8);
        uVar8 = 0;
      }
      else {
        *(undefined4 *)(lVar5 + 0x1b0) = *(undefined4 *)(param_3 + 0x50);
        *(undefined4 *)(lVar5 + 0x1b4) = *(undefined4 *)(param_3 + 0x54);
        *(undefined4 *)(lVar5 + 0x1a0) = uVar8;
        *(undefined4 *)(lVar5 + 0x1a4) = uVar9;
        *(undefined4 *)(lVar5 + 0x1a8) = uVar10;
        *(undefined4 *)(lVar5 + 0x1ac) = uVar11;
        lVar5 = FUN_0023e82c(*(undefined8 *)(param_3 + 0x118),param_4);
        bVar7 = *(byte *)(param_3 + 0xe8);
        uVar8 = 0xd00;
      }
      uVar9 = NEON_ucvtf((uint)bVar7);
      *(undefined4 *)(lVar5 + 0x1d0) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xe9));
      *(undefined4 *)(lVar5 + 0x1d4) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xea));
      *(undefined4 *)(lVar5 + 0x1d8) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xeb));
      *(undefined4 *)(lVar5 + 0x1dc) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xec));
      *(undefined4 *)(lVar5 + 0x1e0) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xed));
      *(undefined4 *)(lVar5 + 0x1e4) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xee));
      *(undefined4 *)(lVar5 + 0x1e8) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xef));
      *(undefined4 *)(lVar5 + 0x1ec) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf0));
      *(undefined4 *)(lVar5 + 0x1f0) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf1));
      *(undefined4 *)(lVar5 + 500) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf2));
      *(undefined4 *)(lVar5 + 0x1f8) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf3));
      *(undefined4 *)(lVar5 + 0x1fc) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf4));
      *(undefined4 *)(lVar5 + 0x200) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf5));
      *(undefined4 *)(lVar5 + 0x204) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf6));
      *(undefined4 *)(lVar5 + 0x208) = uVar9;
      uVar9 = NEON_ucvtf((uint)*(byte *)(param_3 + 0xf7));
      *(undefined4 *)(lVar5 + 0x20c) = uVar9;
    }
    lVar5 = FUN_0023e82c(*(undefined8 *)(param_3 + 0x118),param_4);
    *(undefined4 *)(lVar5 + 0x22c) = uVar8;
    FUN_00255270(param_3,param_4,&local_48,&local_80);
  }
  return;
}


