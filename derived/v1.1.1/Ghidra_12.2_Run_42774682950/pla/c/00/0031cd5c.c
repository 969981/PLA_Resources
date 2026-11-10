/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031cd5c; name: FUN_0031cd5c
 */


uint FUN_0031cd5c(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *__n;
  void *__s1;
  void *__s2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  long lVar14;
  undefined **local_88;
  long *local_80;
  void *local_78;
  undefined ***local_58;
  long *local_50;
  void *local_48;
  long local_40;
  undefined *puStack_38;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  lVar14 = *param_1;
  puVar9 = *(ulong **)(lVar14 + 0x30);
  if ((puVar9 != (ulong *)0x0) &&
     (puStack_38 = PTR_LAB_04373a98, local_40 = lVar14, *puVar9 != 0xffffffffffffffff)) {
    local_88 = &puStack_38;
    local_80 = &local_40;
    local_58 = &local_88;
    std::__call_once(puVar9,&local_58,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(lVar14 + 0x38) * 4)) {
  case 1:
    iVar5 = FUN_00387768(extraout_x1,param_2,*param_1);
    iVar6 = FUN_00387768(extraout_x1,param_3,*param_1);
    uVar8 = (uint)(iVar5 < iVar6);
    break;
  case 2:
    lVar14 = FUN_00387f00(extraout_x1,param_2,*param_1);
    lVar10 = FUN_00387f00(extraout_x1,param_3,*param_1);
    uVar8 = (uint)(lVar14 < lVar10);
    break;
  case 3:
    uVar8 = FUN_00388698(extraout_x1,param_2,*param_1);
    uVar7 = FUN_00388698(extraout_x1,param_3,*param_1);
    uVar8 = (uint)(uVar8 < uVar7);
    break;
  case 4:
    uVar11 = FUN_00388e30(extraout_x1,param_2,*param_1);
    uVar12 = FUN_00388e30(extraout_x1,param_3,*param_1);
    uVar8 = (uint)(uVar11 < uVar12);
    break;
  default:
    FUN_0030f640(&local_88,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/dynamic_message.h"
                 ,0xe0);
                    /* try { // try from 0031cee0 to 0031cef3 has its CatchHandler @ 0031d040 */
    uVar13 = FUN_0030f3ac(&local_88,"Invalid key for map field.");
                    /* try { // try from 0031cef4 to 0031cefb has its CatchHandler @ 0031d03c */
    FUN_0030f41c(&local_58,uVar13);
    FUN_0030f658(&local_88);
    uVar8 = 1;
    break;
  case 7:
    uVar7 = FUN_0038a4f8(extraout_x1,param_2,*param_1);
    uVar8 = FUN_0038a4f8(extraout_x1,param_3,*param_1);
    uVar8 = uVar8 & (uVar7 ^ 1);
    break;
  case 9:
    FUN_00384d60(&local_88,extraout_x1,param_2,*param_1);
                    /* try { // try from 0031cf54 to 0031cf63 has its CatchHandler @ 0031d054 */
    FUN_00384d60(&local_58,extraout_x1,param_3,*param_1);
    pppuVar4 = local_58;
    ppuVar3 = local_88;
    plVar1 = (long *)((ulong)local_58 >> 1 & 0x7f);
    if (((ulong)local_58 & 1) != 0) {
      plVar1 = local_50;
    }
    plVar2 = (long *)((ulong)local_88 >> 1 & 0x7f);
    if (((ulong)local_88 & 1) != 0) {
      plVar2 = local_80;
    }
    __n = plVar1;
    if (plVar2 <= plVar1) {
      __n = plVar2;
    }
    if (__n == (long *)0x0) {
LAB_0031d004:
      uVar8 = 0;
      if (plVar2 < plVar1) {
        uVar8 = 0xffffffff;
      }
    }
    else {
      __s1 = (void *)((ulong)&local_88 | 1);
      if (((ulong)local_88 & 1) != 0) {
        __s1 = local_78;
      }
      __s2 = (void *)((ulong)&local_58 | 1);
      if (((ulong)local_58 & 1) != 0) {
        __s2 = local_48;
      }
      uVar8 = memcmp(__s1,__s2,(size_t)__n);
      if (uVar8 == 0) goto LAB_0031d004;
    }
    if (((ulong)pppuVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_48);
      ppuVar3 = local_88;
    }
    uVar8 = uVar8 >> 0x1f;
    if (((ulong)ppuVar3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_78);
    }
  }
  return uVar8 & 1;
}


