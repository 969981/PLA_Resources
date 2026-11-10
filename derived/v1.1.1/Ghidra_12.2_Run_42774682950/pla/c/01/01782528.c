/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01782528; name: FUN_01782528
 */


undefined1  [16] FUN_01782528(long param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined1 auVar8 [16];
  long local_78;
  long local_68;
  long *local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar7 = 0;
  uVar9 = 0;
  if (*(char *)(param_1 + 0x178) != '\0') {
    lVar4 = FUN_01786a5c(0,param_1 + 0xd0,param_1 + 0x180);
    uVar7 = 0;
    uVar9 = 0;
    if (lVar4 != 0) {
      local_78 = 0;
      local_68 = 0;
      plVar2 = *(long **)(lVar4 + 0x40);
      local_58 = *(ulong *)(lVar4 + 0x48);
      local_50 = *(undefined8 *)(lVar4 + 0x50);
      uStack_48 = *(undefined8 *)(lVar4 + 0x58);
      lVar3 = *(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28);
      lVar6 = 0;
      local_60 = plVar2;
      if (lVar3 != 0) {
        uVar5 = local_58;
        if (0x7ffffffffffffffe < local_58) {
          uVar5 = 0x7fffffffffffffff;
        }
        if (uVar5 < (ulong)(lVar3 >> 5)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        local_78 = (**(code **)(*plVar2 + 0x10))(0,plVar2,lVar3,0x10);
        if (local_78 == 0) {
          (**(code **)(*plVar2 + 0xb8))(plVar2);
        }
        local_68 = local_78 + (lVar3 >> 5) * 0x20;
        lVar3 = *(long *)(lVar4 + 0x28);
        lVar4 = *(long *)(lVar4 + 0x30);
        lVar6 = local_78;
        if (lVar3 != lVar4) {
          FUN_01785554(&local_60,local_78,lVar3);
          lVar6 = local_78 + 0x20;
          if (lVar3 + 0x20 != lVar4) {
            FUN_01785554(&local_60);
            lVar6 = local_78 + 0x40;
            if (lVar3 + 0x40 != lVar4) {
              FUN_01785554(&local_60);
              lVar6 = local_78 + 0x60;
              if (lVar3 + 0x60 != lVar4) {
                FUN_01785554(&local_60);
                lVar6 = local_78 + 0x80;
                if (lVar3 + 0x80 != lVar4) {
                  FUN_01785554(&local_60);
                  lVar6 = local_78 + 0xa0;
                  for (lVar3 = lVar3 + 0xa0; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
                    FUN_01785554(&local_60,lVar6,lVar3);
                    lVar6 = lVar6 + 0x20;
                  }
                }
              }
            }
          }
        }
      }
      plVar2 = local_60;
      if (param_2 < 0) {
        uVar9 = *(undefined8 *)(PTR_DAT_0437a330 + 8);
        uVar7 = *(undefined8 *)PTR_DAT_0437a330;
      }
      else if ((lVar6 - local_78 >> 5) - 1U < (ulong)(long)param_2) {
        uVar9 = *(undefined8 *)(PTR_DAT_0437a330 + 8);
        uVar7 = *(undefined8 *)PTR_DAT_0437a330;
      }
      else {
        puVar1 = (undefined8 *)(local_78 + (long)param_2 * 0x20);
        *(int *)(param_1 + 0x188) = param_2;
        uVar9 = puVar1[1];
        uVar7 = *puVar1;
      }
      if (local_78 != 0) {
        uVar5 = (**(code **)(*local_60 + 0xc0))(local_60);
        if ((uVar5 & 1) != 0) {
          lVar4 = tpidr_el0;
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar4 + 0x38d480)) {
            FUN_02bcc824(plVar2,local_78,local_68 - local_78,0x10);
            goto LAB_01782730;
          }
        }
        (**(code **)(*plVar2 + 0x18))(plVar2,local_78,local_68 - local_78,0x10);
      }
    }
  }
LAB_01782730:
  auVar8._8_8_ = uVar9;
  auVar8._0_8_ = uVar7;
  return auVar8;
}


