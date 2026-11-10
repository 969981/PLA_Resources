/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cd710; name: FUN_003cd710
 */


void FUN_003cd710(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *param_1;
  if (param_2 == 0) {
    param_2 = (**(code **)(**(long **)(lVar5 + 0x808) + 0x20))(*(long **)(lVar5 + 0x808),&local_50);
    if (param_2 == 0) {
      uStack_68 = uStack_48;
      local_70 = local_50;
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      FUN_003052c0(**(long **)(lVar5 + 0x810) + 0x18,&local_70);
      FUN_003cd870(param_1);
      return;
    }
    bVar2 = true;
    cVar1 = PTR_DAT_04374008[0x10];
  }
  else {
    bVar2 = false;
    cVar1 = PTR_DAT_04374008[0x10];
  }
  if ((cVar1 == '\0') ||
     ((uVar3 = param_2, 4 < param_2 &&
      (uVar3 = FUN_002f03c0(param_2,"external/com_google_grpc_base/src/core/lib/surface/call.cc",
                            0x515), uVar3 == 0)))) {
    puVar4 = *(undefined8 **)(lVar5 + 0x808);
    *(undefined8 *)(lVar5 + 0x808) = 0;
  }
  else {
    FUN_002f1e00("receiving_slice_ready",uVar3,
                 "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x515);
    puVar4 = *(undefined8 **)(lVar5 + 0x808);
    *(undefined8 *)(lVar5 + 0x808) = 0;
  }
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 003cd78c to 003cd78f has its CatchHandler @ 003cd864 */
    (**(code **)*puVar4)();
  }
  FUN_003c8500(**(undefined8 **)(lVar5 + 0x810));
  **(undefined8 **)(lVar5 + 0x810) = 0;
  *(undefined1 *)(lVar5 + 0xb7) = 0;
  FUN_003ccc60(param_1);
  if (bVar2 && 4 < param_2) {
    FUN_002f0430(param_2,"external/com_google_grpc_base/src/core/lib/surface/call.cc",0x51d);
  }
  return;
}


