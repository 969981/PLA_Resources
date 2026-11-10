/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00545e20; name: FUN_00545e20
 */


undefined8 FUN_00545e20(char *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  char *__s2;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  ulong local_38;
  
  puVar3 = DAT_0439ece0;
  if (DAT_0439ece0 == (ulong *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                 ,0x68,2,"assertion failed: %s","g_state != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = *DAT_0439ece0;
  if (1 < uVar6) {
    uVar10 = 0;
    puVar11 = DAT_0439ece0 + 1;
    do {
      puVar8 = puVar11;
      if ((uVar6 & 1) != 0) {
        puVar8 = (ulong *)puVar3[1];
      }
      __s2 = (char *)(**(code **)(*(long *)puVar8[uVar10] + 0x18))();
      iVar4 = strcmp(param_1,__s2);
      if (iVar4 == 0) {
        if (*puVar3 >> 1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                        0x13e,"operator[]");
        }
        if ((*puVar3 & 1) != 0) {
          puVar11 = (ulong *)puVar3[1];
        }
        plVar5 = (long *)puVar11[uVar10];
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        if (param_2 != 0) {
          local_70 = &local_68;
          local_38 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          local_80 = 0;
          local_68 = 0;
                    /* try { // try from 00545efc to 00545f0b has its CatchHandler @ 00546068 */
          (**(code **)(*plVar5 + 0x20))(&local_40,plVar5,&local_90,&local_38);
          *(bool *)param_2 = local_40 == (undefined8 *)0x0;
          if (local_40 != (undefined8 *)0x0) {
            lVar7 = local_40[1];
            plVar5 = local_40 + 2;
            do {
              lVar9 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 00545f4c to 00545f6b has its CatchHandler @ 00546064 */
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                           "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),local_40 + 1,lVar9);
            }
            if (lVar9 < 1) {
                    /* try { // try from 0054603c to 00546063 has its CatchHandler @ 00546064 */
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                           "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (lVar9 == 1) {
              (**(code **)*local_40)(local_40);
              FUN_002e2ea0(PTR_LAB_04373088,local_40);
            }
          }
          FUN_005465dc(&uStack_58);
          FUN_003e9f80(&local_70,local_68);
          if ((uStack_88 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,uStack_78);
          }
          if (4 < local_38) {
            FUN_002f0430(local_38,
                         "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                         ,0x72);
          }
        }
        return 1;
      }
      uVar6 = *puVar3;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6 >> 1);
  }
  return 0;
}


