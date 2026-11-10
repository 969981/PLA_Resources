/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00255798; name: FUN_00255798
 */


void FUN_00255798(long param_1,long param_2,float *param_3,long param_4,float *param_5,
                 undefined4 param_6)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined2 uVar4;
  void *__dest;
  undefined8 uVar5;
  long lVar6;
  void *__src;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  
  if (((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) &&
       (*(char *)(param_1 + 0xea) == -1)) &&
      (((*(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)) &&
       ((*(char *)(param_1 + 0xed) == -1 &&
        ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))))))) &&
     ((*(char *)(param_1 + 0xf0) == -1 &&
      (((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) &&
         (*(char *)(param_1 + 0xf3) == -1)) &&
        ((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)))) &&
       ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) {
    bVar3 = *(char *)(param_1 + 0x5a) != -1;
  }
  else {
    bVar3 = true;
  }
  bVar2 = *(byte *)(param_1 + 0x10a);
  lVar7 = 0;
  plVar8 = (long *)(param_4 + 8);
  plVar9 = (long *)*plVar8;
  if (bVar3) goto LAB_002559fc;
LAB_00255968:
  if ((*(byte *)((long)plVar9 + 0x12) >> 1 & 1) != 0) goto LAB_002559fc;
  uVar5 = FUN_002443a8(param_1);
  uVar4 = FUN_00244380(param_1);
  (**(code **)(*plVar9 + 0x20))
            (plVar9,param_2,param_6,1,0,param_1 + 0x70,param_1 + 0x50,uVar5,uVar4);
  if ((bVar2 & 1) == 0) goto LAB_00255b4c;
  lVar6 = FUN_0023e82c(*plVar8,param_2);
  *(undefined4 *)(lVar6 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(lVar6 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
  *(float *)(lVar6 + 0x1a0) = *param_5;
  *(float *)(lVar6 + 0x1a4) = param_5[1];
  *(float *)(lVar6 + 0x1a8) = param_5[2];
  *(float *)(lVar6 + 0x1ac) = param_5[3];
  if (lVar7 != 0) goto LAB_00255b50;
LAB_002558c4:
  local_68 = *(undefined8 *)param_3;
  local_70 = *param_5;
  local_6c = *(undefined4 *)(param_1 + 0x54);
  do {
    uVar1 = *(uint *)(PTR_DAT_04372de8 + (ulong)*(byte *)(plVar8 + -1) * 4) |
            *(uint *)(PTR_DAT_04372de0 + lVar7);
    if ((bVar2 & 1) == 0) {
      uVar1 = *(uint *)(PTR_DAT_04372de8 + (ulong)*(byte *)(plVar8 + -1) * 4) |
              *(uint *)(PTR_DAT_04372de0 + lVar7) | 0x40000000;
    }
    lVar6 = FUN_0023e82c(*plVar8,param_2);
    *(uint *)(lVar6 + 0x22c) = uVar1;
    __dest = (void *)FUN_0023e82c(*plVar8,param_2);
    plVar9 = plVar8;
    while( true ) {
      FUN_0022d1c0(param_2,__dest,&local_68,&local_70);
      plVar8 = plVar9 + 2;
      lVar7 = lVar7 + 4;
      *(byte *)(*plVar9 + 0x48) =
           *(byte *)(*plVar9 + 0x48) & 0xf0 | *(byte *)(param_2 + 0x18d) & 0xf;
      if (lVar7 == 8) {
        return;
      }
      plVar9 = (long *)*plVar8;
      if (!bVar3) goto LAB_00255968;
LAB_002559fc:
      uVar5 = FUN_002443a8(param_1);
      uVar4 = FUN_00244380(param_1);
      (**(code **)(*plVar9 + 0x20))
                (plVar9,param_2,param_6,0,0,param_1 + 0x70,param_1 + 0x50,uVar5,uVar4);
      if ((bVar2 & 1) != 0) {
        lVar6 = FUN_0023e82c(*plVar8,param_2);
        *(undefined4 *)(lVar6 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(lVar6 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
        *(float *)(lVar6 + 0x1a0) = *param_5;
        *(float *)(lVar6 + 0x1a4) = param_5[1];
        *(float *)(lVar6 + 0x1a8) = param_5[2];
        *(float *)(lVar6 + 0x1ac) = param_5[3];
        lVar6 = FUN_0023e82c(*plVar8,param_2);
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8));
        *(undefined4 *)(lVar6 + 0x1d0) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9));
        *(undefined4 *)(lVar6 + 0x1d4) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea));
        *(undefined4 *)(lVar6 + 0x1d8) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb));
        *(undefined4 *)(lVar6 + 0x1dc) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
        *(undefined4 *)(lVar6 + 0x1e0) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed));
        *(undefined4 *)(lVar6 + 0x1e4) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee));
        *(undefined4 *)(lVar6 + 0x1e8) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef));
        *(undefined4 *)(lVar6 + 0x1ec) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0));
        *(undefined4 *)(lVar6 + 0x1f0) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1));
        *(undefined4 *)(lVar6 + 500) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2));
        *(undefined4 *)(lVar6 + 0x1f8) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3));
        *(undefined4 *)(lVar6 + 0x1fc) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4));
        *(undefined4 *)(lVar6 + 0x200) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5));
        *(undefined4 *)(lVar6 + 0x204) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6));
        *(undefined4 *)(lVar6 + 0x208) = uVar10;
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7));
        *(undefined4 *)(lVar6 + 0x20c) = uVar10;
      }
LAB_00255b4c:
      if (lVar7 == 0) goto LAB_002558c4;
LAB_00255b50:
      local_70 = param_5[1];
      local_68 = CONCAT44(param_3[1],(*param_3 + *(float *)(param_1 + 0x50)) - local_70);
      local_6c = *(undefined4 *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 0x10a) >> 1 & 1) == 0) break;
      __dest = (void *)FUN_0023e82c(*plVar8,param_2);
      __src = (void *)FUN_0023e82c(*(undefined8 *)(param_4 + 8),param_2);
      memcpy(__dest,__src,0x230);
      uVar1 = *(uint *)(PTR_DAT_04372de8 + (ulong)*(byte *)(plVar8 + -1) * 4) |
              *(uint *)(PTR_DAT_04372de0 + lVar7);
      if ((bVar2 & 1) == 0) {
        uVar1 = *(uint *)(PTR_DAT_04372de8 + (ulong)*(byte *)(plVar8 + -1) * 4) |
                *(uint *)(PTR_DAT_04372de0 + lVar7) | 0x40000000;
      }
      *(uint *)((long)__dest + 0x22c) = uVar1;
      plVar9 = plVar8;
    }
  } while( true );
}


