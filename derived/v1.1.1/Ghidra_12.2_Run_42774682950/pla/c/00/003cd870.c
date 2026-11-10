/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cd870; name: FUN_003cd870
 */


void FUN_003cd870(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *param_1;
  plVar1 = *(long **)(lVar5 + 0x808);
  lVar4 = (ulong)*(uint *)(plVar1 + 1) - *(long *)(**(long **)(lVar5 + 0x810) + 0x38);
  if (lVar4 != 0) {
    do {
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5 + 0x838);
      if ((uVar2 & 1) == 0) {
        return;
      }
      uVar2 = (**(code **)(**(long **)(lVar5 + 0x808) + 0x20))
                        (*(long **)(lVar5 + 0x808),(undefined8 *)(lVar5 + 0x818));
      if (uVar2 != 0) {
        puVar3 = *(undefined8 **)(lVar5 + 0x808);
        *(undefined8 *)(lVar5 + 0x808) = 0;
        if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 003cd95c to 003cd95f has its CatchHandler @ 003cd9a0 */
          (**(code **)*puVar3)();
        }
        FUN_003c8500(**(undefined8 **)(lVar5 + 0x810));
        **(undefined8 **)(lVar5 + 0x810) = 0;
        *(undefined1 *)(lVar5 + 0xb7) = 0;
        FUN_003ccc60(param_1);
        if (uVar2 < 5) {
          return;
        }
        FUN_002f0430(uVar2,"external/com_google_grpc_base/src/core/lib/surface/call.cc",0x4f8);
        return;
      }
      uStack_48 = *(undefined8 *)(lVar5 + 0x820);
      local_50 = *(undefined8 *)(lVar5 + 0x818);
      uStack_38 = *(undefined8 *)(lVar5 + 0x830);
      uStack_40 = *(undefined8 *)(lVar5 + 0x828);
      FUN_003052c0(**(long **)(lVar5 + 0x810) + 0x18,&local_50);
      plVar1 = *(long **)(lVar5 + 0x808);
      lVar4 = (ulong)*(uint *)(plVar1 + 1) - *(long *)(**(long **)(lVar5 + 0x810) + 0x38);
    } while (lVar4 != 0);
  }
  *(undefined1 *)(lVar5 + 0xb7) = 0;
  *(undefined8 *)(lVar5 + 0x808) = 0;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 003cd924 to 003cd927 has its CatchHandler @ 003cd9a4 */
    (**(code **)*plVar1)();
  }
  FUN_003ccc60(param_1);
  return;
}


