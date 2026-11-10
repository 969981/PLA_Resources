/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e45f0; name: FUN_005e45f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_005e45f0(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long *plVar2;
  undefined4 *puVar3;
  void *pvVar4;
  size_t sVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined4 *puVar8;
  long lVar9;
  void *__dest;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar10 = *param_1;
  uVar11 = param_1[1];
  lVar12 = param_1[2];
  plVar2 = (long *)FUN_0053ee00(PTR_PTR_04375130);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
    iVar1 = _DAT_00000008;
  }
  else {
    uVar6 = uVar11 & 0xff;
    if (lVar10 == 0) {
      lVar12 = (long)param_1 + 9;
    }
    else {
      uVar6 = uVar11;
    }
    uVar11 = FUN_005403e0(lVar12,uVar6,plVar2,PTR_PTR_04375130,param_2);
    if ((uVar11 & 1) == 0) {
      plVar2 = (long *)0x0;
    }
    iVar1 = (int)plVar2[1];
  }
  if (iVar1 == 1) {
    lVar12 = *plVar2;
    if (lVar12 != 0) {
      *param_3 = 0;
      plVar2 = *(long **)(lVar12 + 0x10);
      if (plVar2 != (long *)0x0) {
        *(long *)(param_3 + 2) = *plVar2 * 1000 + (long)((int)plVar2[1] / 1000000);
      }
      return 1;
    }
  }
  else {
    if (iVar1 == 3) {
      *param_3 = 2;
      return 1;
    }
    if ((iVar1 == 2) && ((long *)*plVar2 != (long *)0x0)) {
      puVar7 = *(ulong **)*plVar2;
      if ((puVar7 != (ulong *)0x0) && (uVar11 = puVar7[1], uVar11 != 0)) {
        plVar2 = (long *)(*puVar7 & 0xfffffffffffffff8);
        lVar12 = *(long *)(param_3 + 4);
        if ((ulong)((*(long *)(param_3 + 8) - lVar12 >> 2) * -0x79435e50d79435e5) < uVar11) {
          lVar9 = *(long *)(param_3 + 6);
          lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar11 * 0x4c);
          pvVar4 = *(void **)(param_3 + 4);
          lVar12 = lVar10 + (lVar9 - lVar12);
          sVar5 = *(long *)(param_3 + 6) - (long)pvVar4;
          __dest = (void *)(lVar12 - sVar5);
          if (0 < (long)sVar5) {
            memcpy(__dest,pvVar4,sVar5);
            pvVar4 = *(void **)(param_3 + 4);
          }
          *(void **)(param_3 + 4) = __dest;
          *(long *)(param_3 + 6) = lVar12;
          *(ulong *)(param_3 + 8) = lVar10 + uVar11 * 0x4c;
          if (pvVar4 != (void *)0x0) {
            FUN_002e2ea0(PTR_LAB_04373088);
          }
        }
        do {
          puVar3 = (undefined4 *)FUN_005e485c(param_3 + 4,*(undefined8 *)(param_3 + 6));
          puVar8 = (undefined4 *)*plVar2;
          sVar5 = *(size_t *)(puVar8 + 4);
          if (sVar5 - 1 < 0x10) {
            pvVar4 = *(void **)(puVar8 + 2);
            *puVar3 = (int)sVar5;
            memcpy(puVar3 + 1,pvVar4,sVar5);
            puVar8 = (undefined4 *)*plVar2;
          }
          puVar3[5] = *puVar8;
          uVar6 = *(ulong *)(puVar8 + 8);
          if (uVar6 != 0) {
            if (uVar6 < 0x33) {
              memcpy(puVar3 + 6,*(void **)(puVar8 + 6),uVar6);
            }
            else {
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/load_balancer_api.cc"
                           ,0x8b,2,"grpc_lb_v1_LoadBalanceResponse has too long token. len=%zu");
            }
          }
          uVar11 = uVar11 - 1;
          *(undefined1 *)((long)puVar3 + 0x4a) = *(undefined1 *)(*plVar2 + 4);
          plVar2 = plVar2 + 1;
        } while (uVar11 != 0);
      }
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}


