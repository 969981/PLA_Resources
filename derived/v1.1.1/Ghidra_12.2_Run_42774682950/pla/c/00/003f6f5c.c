/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f6f5c; name: FUN_003f6f5c
 */


void FUN_003f6f5c(ulong param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong *puVar13;
  long *local_28;
  
  lVar1 = DAT_0439cd40;
  if (DAT_0439cd40 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/handshaker_registry.cc",0x5b,2,
                 "assertion failed: %s","g_handshaker_factory_lists != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_28 = (long *)*param_3;
  *param_3 = 0;
  puVar13 = (ulong *)(lVar1 + (ulong)param_2 * 0x18);
                    /* try { // try from 003f6f90 to 003f6f9b has its CatchHandler @ 003f70c0 */
  FUN_003f71c8(puVar13,&local_28);
  plVar2 = local_28;
  if ((param_1 & 1) != 0) {
    uVar9 = *puVar13;
    uVar6 = uVar9 >> 1;
    if (uVar6 == 0) {
                    /* try { // try from 003f70a0 to 003f70bf has its CatchHandler @ 003f70c0 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                    "operator[]");
    }
    lVar3 = uVar6 - 1;
    if ((uVar9 & 1) == 0) {
      puVar7 = (undefined8 *)(lVar1 + (ulong)param_2 * 0x18 + 8);
    }
    else {
      puVar7 = *(undefined8 **)(lVar1 + (ulong)param_2 * 0x18 + 8);
    }
    if (lVar3 != 0) {
      uVar11 = *puVar7;
      *puVar7 = puVar7[lVar3];
      puVar7[lVar3] = uVar11;
      if (lVar3 != 1) {
        puVar8 = puVar7 + 2;
        puVar5 = puVar7 + lVar3;
        puVar4 = puVar7 + lVar3;
        do {
          uVar12 = puVar8[-1];
          puVar8[-1] = uVar11;
          puVar10 = puVar4 + 1;
          *puVar4 = uVar12;
          if (puVar10 == puVar7 + uVar6) {
            puVar4 = puVar5;
            puVar10 = puVar5;
            if (puVar8 == puVar5) break;
          }
          else {
            puVar4 = puVar10;
            if (puVar8 != puVar5) {
              puVar4 = puVar5;
            }
          }
          uVar11 = *puVar10;
          puVar8 = puVar8 + 1;
          puVar5 = puVar4;
          puVar4 = puVar10;
        } while( true );
      }
    }
  }
  local_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    FUN_002e2ea0(PTR_LAB_04373088,plVar2);
  }
  return;
}


