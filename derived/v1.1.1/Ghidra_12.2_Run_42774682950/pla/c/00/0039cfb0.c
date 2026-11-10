/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039cfb0; name: FUN_0039cfb0
 */


void FUN_0039cfb0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 extraout_x1;
  ulong *puVar4;
  ulong *puVar5;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  puVar5 = (ulong *)(param_2[1] & 0xfffffffffffffffe);
  if ((param_2[1] & 1U) == 0) {
    puVar4 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
    if ((param_1[1] & 1U) != 0) goto LAB_0039d0e0;
LAB_0039cfe0:
    if (puVar4 != puVar5) goto LAB_0039d024;
  }
  else {
    puVar5 = (ulong *)*puVar5;
    puVar4 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
    if ((param_1[1] & 1U) == 0) goto LAB_0039cfe0;
LAB_0039d0e0:
    if ((ulong *)*puVar4 != puVar5) goto LAB_0039d024;
  }
  FUN_0030f640(auStack_60,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/reflection_ops.cc"
               ,0x16d);
                    /* try { // try from 0039d000 to 0039d013 has its CatchHandler @ 0039d0f4 */
  uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: m1->GetArena() != m2_arena: ");
                    /* try { // try from 0039d014 to 0039d01b has its CatchHandler @ 0039d0f0 */
  FUN_0030f41c(auStack_28,uVar2);
  FUN_0030f658(auStack_60);
LAB_0039d024:
  plVar3 = (long *)(**(code **)(*param_2 + 0x20))(param_2,puVar5);
  plVar1 = plVar3;
  if (puVar5 != (ulong *)0x0) {
    plVar1 = (long *)0x0;
  }
                    /* try { // try from 0039d04c to 0039d097 has its CatchHandler @ 0039d108 */
  (**(code **)(*plVar3 + 0x40))(plVar3,param_1);
  (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  (**(code **)(*param_2 + 0x98))(param_2);
  FUN_00383254(extraout_x1,plVar3,param_2);
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  return;
}


