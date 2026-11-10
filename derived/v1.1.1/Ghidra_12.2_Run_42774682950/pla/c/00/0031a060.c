/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031a060; name: FUN_0031a060
 */


ulong FUN_0031a060(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined **local_60;
  long *plStack_58;
  long local_30;
  undefined *puStack_28;
  undefined1 *local_18;
  
  puVar3 = *(ulong **)(param_1 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_28 = PTR_LAB_04373a98, local_30 = param_1, *puVar3 != 0xffffffffffffffff)) {
    local_60 = &puStack_28;
    plStack_58 = &local_30;
    local_18 = (undefined1 *)&local_60;
    std::__call_once(puVar3,&local_18,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  uVar4 = 4;
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
  case 6:
  case 0x10:
    uVar4 = 8;
  case 2:
  case 7:
  case 0xf:
    return uVar4;
  case 3:
    uVar4 = FUN_0031c394(param_2);
    break;
  case 4:
    uVar4 = FUN_0031c480(param_2);
    break;
  case 5:
    uVar1 = FUN_0031c56c(param_2);
    goto joined_r0x0031a25c;
  case 8:
    return 1;
  case 9:
  case 0xc:
    pbVar5 = (byte *)FUN_0031caf4(param_2);
    uVar4 = (ulong)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) != 0) {
      uVar4 = *(ulong *)(pbVar5 + 8);
    }
    return uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  case 10:
    FUN_0030f640(&local_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                 ,0x622);
                    /* try { // try from 0031a1d0 to 0031a1e3 has its CatchHandler @ 0031a2f0 */
    uVar6 = FUN_0030f3ac(&local_60,"Unsupported");
                    /* try { // try from 0031a1e4 to 0031a1eb has its CatchHandler @ 0031a2ec */
    FUN_0030f41c(&local_18,uVar6);
    goto LAB_0031a1ec;
  case 0xb:
    plVar7 = (long *)FUN_0031cbdc(param_2);
    lVar8 = (**(code **)(*plVar7 + 0x48))();
    return lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  case 0xd:
    uVar1 = FUN_0031c658(param_2);
    goto LAB_0031a27c;
  case 0xe:
    uVar1 = FUN_0031c830(param_2);
joined_r0x0031a25c:
    if ((int)uVar1 < 0) {
      return 10;
    }
LAB_0031a27c:
    return (ulong)(((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  case 0x11:
    iVar2 = FUN_0031c56c(param_2);
    uVar1 = iVar2 << 1 ^ iVar2 >> 0x1f;
    goto LAB_0031a27c;
  case 0x12:
    lVar8 = FUN_0031c394(param_2);
    uVar4 = lVar8 << 1 ^ lVar8 >> 0x3f;
    break;
  default:
    FUN_0030f640(&local_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                 ,0x642);
                    /* try { // try from 0031a158 to 0031a16b has its CatchHandler @ 0031a2f8 */
    uVar6 = FUN_0030f3ac(&local_60,"Cannot get here");
                    /* try { // try from 0031a16c to 0031a173 has its CatchHandler @ 0031a2f4 */
    FUN_0030f41c(&local_18,uVar6);
LAB_0031a1ec:
    FUN_0030f658(&local_60);
    return 0;
  }
  return (LZCOUNT(uVar4 | 1) ^ 0x3fU) * 9 + 0x49 >> 6;
}


