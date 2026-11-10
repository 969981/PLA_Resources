/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e6044; name: FUN_028e6044
 */


void FUN_028e6044(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  
  *(undefined1 *)(param_1 + 2) = 0;
  puVar15 = &DAT_cbf29ce484222645;
  *param_1 = &PTR_LAB_04273e60;
  param_1[1] = param_2;
  param_1[3] = &DAT_cbf29ce484222645;
  param_1[4] = &DAT_03996322;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar10 = 0;
  if (param_2 != (int *)0x0) {
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
       (uVar8 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar8 == 0)) {
      lVar10 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar8);
      lVar10 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_028ca1c4(param_1 + 7,lVar10);
  param_1[0x40] = param_3;
  piVar14 = (int *)param_1[1];
  param_1[0x41] = param_4;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (piVar14 != (int *)0x0) {
    if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
       (uVar8 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar8 == 0)) {
      lVar10 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar14 + uVar8);
      lVar10 = (long)puVar1 + (ulong)*puVar1;
    }
    sVar4 = strlen((char *)(lVar10 + 4));
    bVar2 = *(byte *)(lVar10 + 4);
    if (bVar2 != 0) {
      pbVar9 = (byte *)(lVar10 + 5);
      do {
        puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
    }
    param_1[5] = sVar4;
    plVar5 = (long *)param_1[6];
    param_1[6] = 0;
    param_1[3] = puVar15;
    param_1[4] = (char *)(lVar10 + 4);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
      piVar14 = (int *)param_1[1];
    }
    param_1[6] = 0;
    if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar8 == 0)) {
      param_1[2] = 1;
    }
    else {
      param_1[2] = (ulong)*(uint *)((long)piVar14 + uVar8) << 0x20 | 1;
    }
    if (param_5 != 0) {
      if (((*PTR_DAT_0437a570 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar3 != 0)) {
        FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a570);
      }
      plVar5 = (long *)PTR_DAT_0437a578;
      if (*(long *)(param_5 + 200) != 0) {
        plVar5 = (long *)(*(long *)(param_5 + 200) + 0x88);
      }
      lVar10 = *plVar5;
      if (lVar10 != 0) {
        uVar8 = (ulong)(*(long *)(lVar10 + 0x278) - *(long *)(lVar10 + 0x270)) >> 4;
        uVar13 = (ulong)(uint)(int)(short)((short)uVar8 * -0x5555);
        if (param_1[0x17] != uVar13) {
          FUN_028cdd6c(param_1 + 0x16,uVar13,0);
          if ((int)uVar8 * -0x55550000 != 0) {
            uVar8 = 0;
            do {
              puVar6 = (undefined8 *)FUN_02b68dac(*plVar5,uVar8 & 0xffffffff);
              local_60 = *puVar6;
              local_58 = puVar6[1];
              local_50 = puVar6[2];
              local_48 = (long *)puVar6[3];
              if (local_48 != (long *)0x0) {
                (**(code **)(*local_48 + 0x18))();
              }
              uVar7 = FUN_028ca890(param_1 + 8,&local_60);
              lVar10 = param_1[0x16];
              uVar11 = uVar8 >> 6;
              uVar12 = 1L << (uVar8 & 0x3f);
              if ((uVar7 & 1) == 0) {
                uVar12 = *(ulong *)(lVar10 + uVar11 * 8) & (uVar12 ^ 0xffffffffffffffff);
              }
              else {
                uVar12 = *(ulong *)(lVar10 + uVar11 * 8) | uVar12;
              }
              *(ulong *)(lVar10 + uVar11 * 8) = uVar12;
              if (local_48 != (long *)0x0) {
                (**(code **)(*local_48 + 0x20))();
              }
              uVar8 = uVar8 + 1;
            } while (uVar13 != uVar8);
          }
        }
      }
    }
  }
  return;
}


