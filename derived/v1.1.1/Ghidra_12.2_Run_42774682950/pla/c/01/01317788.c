/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01317788; name: FUN_01317788
 */


/* WARNING: Removing unreachable block (ram,0x01317820) */

void FUN_01317788(long param_1,byte param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  undefined1 uVar10;
  uint *puVar11;
  undefined4 uVar12;
  long *plVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  byte local_80 [4];
  undefined4 local_7c;
  undefined4 uStack_78;
  byte local_74 [4];
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined8 local_68;
  
  if (*(long *)(param_1 + 0x750) != 0) {
    lVar7 = (long)*(int *)(*(long *)(param_1 + 0x5c0) + 0x84);
    if (1 < lVar7 - 5U) {
      FUN_013085c0(*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x1a8),lVar7,
                   *(undefined8 *)(param_1 + 0x1de0));
      puVar2 = PTR_DAT_0437a0d8;
      puVar11 = *(uint **)(param_1 + 0x1de0);
      if (*puVar11 != 0) {
        lVar9 = 0x60;
        uVar14 = 0;
        while( true ) {
          local_88 = 0;
          if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
            FUN_00100250(PTR_FUN_0437a0e0,puVar2,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a0d0);
          }
          local_a8 = *(undefined8 *)puVar2;
          local_a0 = *(char **)(puVar2 + 8);
          local_98 = *(undefined8 *)(puVar2 + 0x10);
          local_90 = *(long **)(puVar2 + 0x18);
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x18))();
          }
          if (*(char *)(param_1 + 0x1e08) == '\0') {
            local_88 = CONCAT44(*(float *)(param_1 + 0xd64) +
                                (*(float *)((long)puVar11 + lVar9 + -0x40) -
                                *(float *)(param_1 + 0xd64)) * *(float *)(param_1 + 0x1e30),
                                *(float *)(param_1 + 0xd60) +
                                (*(float *)((long)puVar11 + lVar9 + -0x44) -
                                *(float *)(param_1 + 0xd60)) * *(float *)(param_1 + 0x1e30));
            uVar10 = *(undefined1 *)((long)puVar11 + lVar9 + -0x48);
            uVar12 = *(undefined4 *)((long)puVar11 + lVar9 + -0x3c);
            uVar8 = *(undefined4 *)((long)puVar11 + lVar9 + -0x38);
          }
          else {
            fVar15 = *(float *)(param_1 + 0x1e28) + *(float *)(param_1 + 0xd60);
            fVar16 = *(float *)(param_1 + 0x1e2c) + *(float *)(param_1 + 0xd64);
            local_88 = CONCAT44(fVar16 + ((*(float *)((long)puVar11 + lVar9 + -0x2c) +
                                          *(float *)(param_1 + 0x1e2c)) - fVar16) *
                                         *(float *)(param_1 + 0x1e30),
                                fVar15 + *(float *)(param_1 + 0x1e30) *
                                         ((*(float *)((long)puVar11 + lVar9 + -0x30) +
                                          *(float *)(param_1 + 0x1e28)) - fVar15));
            uVar10 = *(undefined1 *)((long)puVar11 + lVar9 + -0x34);
            uVar12 = *(undefined4 *)((long)puVar11 + lVar9 + -0x28);
            uVar8 = *(undefined4 *)((long)puVar11 + lVar9 + -0x24);
          }
          puVar5 = (undefined8 *)((long)puVar11 + lVar9);
          local_a8 = puVar5[-3];
          uVar1 = *(undefined4 *)(puVar5 + -4);
          local_a0 = (char *)puVar5[-2];
          local_98 = puVar5[-1];
          plVar13 = (long *)*puVar5;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
          if (local_90 != (long *)0x0) {
            lVar6 = *local_90;
            local_90 = plVar13;
            (**(code **)(lVar6 + 0x20))();
            plVar13 = local_90;
          }
          local_90 = plVar13;
          uVar4 = FUN_0131b970(*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x78),lVar7,uVar1);
          if ((uVar4 & 1) == 0) {
            if (*local_a0 == '\0') {
              local_80[0] = 0;
            }
            else {
              local_80[0] = FUN_0131f6d0(&local_a8);
            }
          }
          else {
            local_80[0] = 1;
          }
          local_68 = *(undefined8 *)((long)puVar11 + lVar9 + -0x50);
          local_80[0] = local_80[0] & 1;
          local_6c = (undefined4)uVar14;
          local_7c = uVar8;
          uStack_78 = uVar12;
          local_74[0] = param_2 & 1;
          local_70[0] = uVar10;
          (**(code **)(param_1 + 0x750))
                    (param_1 + 0x770,&local_6c,local_70,local_74,&local_88,&local_68,&uStack_78,
                     &local_7c,local_80);
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x20))();
          }
          puVar11 = *(uint **)(param_1 + 0x1de0);
          uVar14 = uVar14 + 1;
          lVar9 = lVar9 + 0x60;
          if (*puVar11 <= uVar14) break;
          if (lVar9 == 0x7e0) {
                    /* WARNING: Subroutine does not return */
            FUN_01318f20();
          }
        }
      }
    }
  }
  return;
}


