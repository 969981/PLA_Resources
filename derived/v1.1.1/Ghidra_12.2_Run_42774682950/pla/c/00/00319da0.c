/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00319da0; name: FUN_00319da0
 */


ulong FUN_00319da0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  undefined **local_70;
  long *plStack_68;
  long local_40;
  undefined *puStack_38;
  undefined1 *local_28;
  
  puVar1 = PTR_LAB_04373a98;
  puVar5 = *(ulong **)(param_1 + 0x30);
  if ((puVar5 != (ulong *)0x0) &&
     (puStack_38 = PTR_LAB_04373a98, local_40 = param_1, *puVar5 != 0xffffffffffffffff)) {
    local_70 = &puStack_38;
    plStack_68 = &local_40;
    local_28 = (undefined1 *)&local_70;
    std::__call_once(puVar5,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  iVar4 = *(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_1 + 0x38) * 4);
  iVar2 = FUN_0031aab8(param_2);
  if (iVar4 != iVar2) {
    FUN_0030f640(&local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                 ,0x5f7);
                    /* try { // try from 00319e34 to 00319e47 has its CatchHandler @ 0031a044 */
    uVar6 = FUN_0030f3ac(&local_70,
                         "CHECK failed: (FieldDescriptor::TypeToCppType(field->type())) == (value.type()): "
                        );
                    /* try { // try from 00319e48 to 00319e4f has its CatchHandler @ 0031a040 */
    FUN_0030f41c(&local_28,uVar6);
    FUN_0030f658(&local_70);
  }
  puVar5 = *(ulong **)(param_1 + 0x30);
  if ((puVar5 != (ulong *)0x0) &&
     (puStack_38 = puVar1, local_40 = param_1, *puVar5 != 0xffffffffffffffff)) {
    local_70 = &puStack_38;
    plStack_68 = &local_40;
    local_28 = (undefined1 *)&local_70;
    std::__call_once(puVar5,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  uVar7 = 4;
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
  case 2:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
    FUN_0030f640(&local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                 ,0x5ff);
                    /* try { // try from 00319ed8 to 00319eeb has its CatchHandler @ 0031a03c */
    uVar6 = FUN_0030f3ac(&local_70,"Unsupported");
                    /* try { // try from 00319eec to 00319ef3 has its CatchHandler @ 0031a038 */
    FUN_0030f41c(&local_28,uVar6);
    goto LAB_00319ef4;
  case 3:
    uVar7 = FUN_0031bf0c(param_2);
    goto LAB_00319fdc;
  case 4:
    uVar7 = FUN_0031c0dc(param_2);
    goto LAB_00319fdc;
  case 5:
    uVar3 = FUN_0031bff4(param_2);
    if ((int)uVar3 < 0) {
      return 10;
    }
    goto LAB_0031a008;
  case 6:
  case 0x10:
    uVar7 = 8;
    break;
  case 7:
  case 0xf:
    break;
  case 8:
    uVar7 = 1;
    break;
  case 9:
    pbVar8 = (byte *)FUN_0031be24(param_2);
    uVar7 = (ulong)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      uVar7 = *(ulong *)(pbVar8 + 8);
    }
    uVar7 = uVar7 + (((uint)LZCOUNT((uint)uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    break;
  case 0xd:
    uVar3 = FUN_0031c1c4(param_2);
    goto LAB_0031a008;
  case 0x11:
    iVar4 = FUN_0031bff4(param_2);
    uVar3 = iVar4 << 1 ^ iVar4 >> 0x1f;
LAB_0031a008:
    uVar7 = (ulong)(((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    break;
  case 0x12:
    lVar9 = FUN_0031bf0c(param_2);
    uVar7 = lVar9 << 1 ^ lVar9 >> 0x3f;
LAB_00319fdc:
    uVar7 = (LZCOUNT(uVar7 | 1) ^ 0x3fU) * 9 + 0x49 >> 6;
    break;
  default:
    FUN_0030f640(&local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                 ,0x61a);
                    /* try { // try from 00319f24 to 00319f37 has its CatchHandler @ 0031a034 */
    uVar6 = FUN_0030f3ac(&local_70,"Cannot get here");
                    /* try { // try from 00319f38 to 00319f3f has its CatchHandler @ 0031a030 */
    FUN_0030f41c(&local_28,uVar6);
LAB_00319ef4:
    FUN_0030f658(&local_70);
    uVar7 = 0;
  }
  return uVar7;
}


