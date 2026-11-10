/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037fe70; name: FUN_0037fe70
 */


void FUN_0037fe70(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **local_a8;
  long *local_a0;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar9 + 0x40) != param_1 && *(long *)(lVar9 + 0x40) != 0) {
    FUN_0030f640(&local_a8,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/dynamic_message.cc"
                 ,0x25a);
                    /* try { // try from 0037febc to 0037fecf has its CatchHandler @ 0037ffd8 */
    uVar6 = FUN_0030f3ac(&local_a8,"CHECK failed: is_prototype(): ");
                    /* try { // try from 0037fed0 to 0037fed7 has its CatchHandler @ 0037ffd4 */
    FUN_0030f41c(&local_68,uVar6);
    FUN_0030f658(&local_a8);
    lVar9 = *(long *)(param_1 + 0x10);
  }
  puVar5 = PTR_DAT_04373ab0;
  puVar4 = PTR_LAB_04373aa0;
  puVar3 = PTR_LAB_04373a98;
  lVar10 = *(long *)(lVar9 + 0x20);
  if (0 < *(int *)(lVar10 + 0x68)) {
    uVar6 = *(undefined8 *)(lVar9 + 0x10);
    lVar11 = 0;
    lVar12 = 0;
    while( true ) {
      lVar1 = *(long *)(lVar10 + 0x28) + lVar11;
      iVar2 = *(int *)(*(long *)(lVar9 + 0x28) + lVar12 * 4);
      puVar7 = *(ulong **)(lVar1 + 0x30);
      if ((puVar7 != (ulong *)0x0) &&
         (puStack_70 = puVar3, local_78 = lVar1, *puVar7 != 0xffffffffffffffff)) {
        local_a0 = &local_78;
        local_a8 = &puStack_70;
        local_68 = &local_a8;
        std::__call_once(puVar7,&local_68,(_func_void_void_ptr *)puVar4);
      }
      if ((*(int *)(puVar5 + (ulong)*(uint *)(lVar1 + 0x38) * 4) == 10) &&
         (*(int *)(lVar1 + 0x3c) != 3)) {
        uVar8 = FUN_00342dac(lVar1);
        uVar8 = FUN_0037edac(uVar6,uVar8);
        *(undefined8 *)(param_1 + iVar2) = uVar8;
      }
      lVar12 = lVar12 + 1;
      if (*(int *)(lVar10 + 0x68) <= lVar12) break;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar11 = lVar11 + 0x98;
    }
  }
  return;
}


