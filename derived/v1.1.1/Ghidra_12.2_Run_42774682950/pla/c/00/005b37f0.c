/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b37f0; name: FUN_005b37f0
 */


undefined8 FUN_005b37f0(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong *puVar13;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar13 = (ulong *)param_1[0x2d];
  if (puVar13 == (ulong *)0x0) {
    lVar9 = *(long *)(param_2 & 0xfffffffffffffffc);
  }
  else {
    plVar12 = (long *)(param_2 & 0xfffffffffffffffc);
    do {
      puVar8 = (undefined8 *)(*puVar13 & 0xfffffffffffffffc);
      uStack_58 = puVar8[1];
      local_60 = *puVar8;
      uStack_48 = puVar8[3];
      uStack_50 = puVar8[2];
      lStack_78 = plVar12[1];
      local_80 = *plVar12;
      lStack_68 = plVar12[3];
      lStack_70 = plVar12[2];
      iVar6 = FUN_002f3a50(&local_60,&local_80);
      if (iVar6 != 0) {
        uVar1 = (uint)*puVar13 & 3;
        if (1 < uVar1) {
          uVar10 = *puVar13 & 0xfffffffffffffffc;
          uVar3 = *(undefined4 *)(uVar10 + 0x48);
          plVar12 = (long *)(uVar10 + 0x40);
          FUN_003d81b0(uVar10,uVar10,uVar10 + 0x20,*(undefined8 *)(uVar10 + 0x40),
                       "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/incoming_metadata.cc"
                       ,0x32);
          do {
            lVar9 = *plVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 < 1) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar9 == 1) {
            FUN_003da320(uVar1,uVar10,uVar3,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/incoming_metadata.cc"
                         ,0x32);
          }
        }
        *puVar13 = param_2;
        return 0;
      }
      puVar13 = (ulong *)puVar13[1];
    } while (puVar13 != (ulong *)0x0);
    lVar9 = *plVar12;
  }
  if (lVar9 == 0) {
    uVar10 = (ulong)*(byte *)((param_2 & 0xfffffffffffffffc) + 8);
    lVar9 = *(long *)((param_2 & 0xfffffffffffffffc) + 0x20);
  }
  else {
    uVar10 = *(ulong *)((param_2 & 0xfffffffffffffffc) + 8);
    lVar9 = *(long *)((param_2 & 0xfffffffffffffffc) + 0x20);
  }
  if (lVar9 == 0) {
    uVar11 = (ulong)*(byte *)((param_2 & 0xfffffffffffffffc) + 0x28);
  }
  else {
    uVar11 = *(ulong *)((param_2 & 0xfffffffffffffffc) + 0x28);
  }
  uVar2 = param_1[2];
  param_1[1] = uVar10 + uVar11 + param_1[1] + 0x20;
  if (uVar2 < 10) {
    param_1[2] = uVar2 + 1;
    puVar13 = param_1 + uVar2 * 4 + 3;
  }
  else {
    puVar13 = (ulong *)*param_1;
    do {
      uVar11 = *puVar13;
      uVar10 = uVar11 + 0x20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar5) {
        *puVar13 = uVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar13[1] < uVar10) {
      puVar13 = (ulong *)FUN_003f5a34(puVar13,0x20);
    }
    else {
      puVar13 = (ulong *)((long)puVar13 + uVar11 + 0x20);
    }
  }
  *puVar13 = param_2;
  uVar7 = FUN_003dea10(param_1 + 0x2b);
  return uVar7;
}


