/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e4ab0; name: FUN_002e4ab0
 */


ulong FUN_002e4ab0(ulong *param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 != (ulong *)0x0 || param_2 != (ulong *)0x0) {
    if ((param_1 == (ulong *)0x0) || (param_2 == (ulong *)0x0)) {
      uVar5 = 1;
      if (param_1 == (ulong *)0x0) {
        uVar5 = 0xffffffff;
      }
      return (ulong)uVar5;
    }
    uVar9 = *param_1;
    uVar5 = (uint)(*param_2 < uVar9);
    if (uVar9 < *param_2) {
      uVar5 = 0xffffffff;
    }
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
    if (uVar9 != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        iVar3 = *(int *)(param_1[1] + lVar7);
        iVar4 = *(int *)(param_2[1] + lVar7);
        uVar5 = (uint)(iVar4 < iVar3);
        if (iVar3 < iVar4) {
          uVar5 = 0xffffffff;
        }
        uVar6 = (ulong)uVar5;
        if (uVar5 == 0) {
          lVar1 = param_1[1] + lVar7;
          lVar2 = param_2[1] + lVar7;
          uVar5 = strcmp(*(char **)(lVar1 + 8),*(char **)(lVar2 + 8));
          if (uVar5 != 0) {
            return (ulong)uVar5;
          }
          if (iVar3 != 2) {
            if (iVar3 == 1) {
              uVar6 = (ulong)(*(int *)(lVar2 + 0x10) < *(int *)(lVar1 + 0x10));
              if (*(int *)(lVar1 + 0x10) < *(int *)(lVar2 + 0x10)) {
                return 0xffffffff;
              }
              goto LAB_002e4b2c;
            }
            if (iVar3 != 0) {
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_args.cc",0xa8
                           ,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar5 = strcmp(*(char **)(lVar1 + 0x10),*(char **)(lVar2 + 0x10));
            uVar9 = (ulong)uVar5;
joined_r0x002e4b84:
            if (uVar5 != 0) {
              return uVar9;
            }
            goto LAB_002e4b30;
          }
          if (*(long *)(lVar1 + 0x10) != *(long *)(lVar2 + 0x10)) {
            uVar9 = *(ulong *)(lVar1 + 0x18);
            uVar5 = (uint)(*(ulong *)(lVar2 + 0x18) < uVar9);
            if (uVar9 < *(ulong *)(lVar2 + 0x18)) {
              uVar5 = 0xffffffff;
            }
            uVar6 = (ulong)uVar5;
            if (uVar5 == 0) {
              uVar9 = (**(code **)(uVar9 + 0x10))(*(long *)(lVar1 + 0x10));
              uVar5 = (uint)uVar9;
              goto joined_r0x002e4b84;
            }
            goto LAB_002e4b2c;
          }
        }
        else {
LAB_002e4b2c:
          if ((int)uVar6 != 0) {
            return uVar6;
          }
LAB_002e4b30:
          uVar9 = *param_1;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x20;
        if (uVar9 <= uVar8) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


