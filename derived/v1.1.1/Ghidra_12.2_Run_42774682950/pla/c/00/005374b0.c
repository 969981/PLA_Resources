/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005374b0; name: FUN_005374b0
 */


void FUN_005374b0(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  byte local_38 [16];
  undefined1 *local_28;
  
  if (*(int *)(param_2 + 0x80) == 0) {
    bVar1 = false;
    puVar2 = &DAT_03996322;
  }
  else {
    FUN_00308b60(local_38);
    if ((local_38[0] & 1) == 0) {
      puVar2 = (undefined1 *)((ulong)local_38 | 1);
    }
    else {
      puVar2 = local_28;
    }
    bVar1 = true;
  }
                    /* try { // try from 005374fc to 00537513 has its CatchHandler @ 00537540 */
  uVar3 = FUN_002ec2d0(puVar2);
  FUN_002e5130(param_1,"grpc.subchannel_address",uVar3);
  if ((bVar1) && ((local_38[0] & 1) != 0)) {
    FUN_002e2ea0(PTR_LAB_04373088,local_28);
  }
  return;
}


