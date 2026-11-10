/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00545c1c; name: FUN_00545c1c
 */


void FUN_00545c1c(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  char *__s2;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 local_60;
  long *plStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  puVar3 = DAT_0439ece0;
  if (DAT_0439ece0 == (ulong *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                 ,0x5d,2,"assertion failed: %s","g_state != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = *DAT_0439ece0;
  if (1 < uVar7) {
    uVar10 = 0;
    puVar11 = DAT_0439ece0 + 1;
    do {
      puVar8 = puVar11;
      if ((uVar7 & 1) != 0) {
        puVar8 = (ulong *)puVar3[1];
      }
      __s2 = (char *)(**(code **)(*(long *)puVar8[uVar10] + 0x18))();
      iVar5 = strcmp(param_2,__s2);
      if (iVar5 == 0) {
        if (*puVar3 >> 1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                        0x13e,"operator[]");
        }
        if ((*puVar3 & 1) != 0) {
          puVar11 = (ulong *)puVar3[1];
        }
        plVar6 = (long *)puVar11[uVar10];
        if (plVar6 != (long *)0x0) {
          plStack_58 = (long *)param_3[1];
          local_60 = *param_3;
          *param_3 = 0;
          param_3[1] = 0;
          uStack_48 = param_3[3];
          local_50 = (undefined8 *)param_3[2];
          param_3[2] = 0;
                    /* try { // try from 00545cd8 to 00545ce3 has its CatchHandler @ 00545db0 */
          (**(code **)(*plVar6 + 0x10))(param_1,plVar6,&local_60);
          puVar4 = local_50;
          local_50 = (undefined8 *)0x0;
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4);
            FUN_002e2ea0(PTR_LAB_04373088,puVar4);
          }
          if (plStack_58 == (long *)0x0) {
            return;
          }
          plVar6 = plStack_58 + 1;
          do {
            lVar9 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            std::__shared_weak_count::__release_weak();
            return;
          }
          return;
        }
        break;
      }
      uVar7 = *puVar3;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7 >> 1);
  }
  *param_1 = 0;
  return;
}


