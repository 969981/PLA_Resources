/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cd450; name: FUN_003cd450
 */


void FUN_003cd450(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_78 [16];
  ulong local_68;
  undefined1 auStack_60 [32];
  ulong local_40;
  undefined *puStack_38;
  
  local_40 = param_2 & 0xffffffff;
  puStack_38 = PTR_FUN_043739e0;
  FUN_002e6390(local_78,"Invalid compression algorithm value \'%d\'.",0x29,&local_40,1);
  uVar1 = (ulong)local_78 | 1;
  if ((local_78[0] & 1) != 0) {
    uVar1 = local_68;
  }
                    /* try { // try from 003cd4a4 to 003cd52f has its CatchHandler @ 003cd558 */
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x576,2,&DAT_038bd9bd,
               uVar1);
  uVar1 = (ulong)local_78 | 1;
  if ((local_78[0] & 1) != 0) {
    uVar1 = local_68;
  }
  FUN_002f2ff0(&local_40,uVar1);
  uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2d6,&local_40,
                       0,0);
  FUN_002f2ff0(auStack_60,uVar1);
  uVar2 = FUN_002f1340(uVar2,5,auStack_60);
  uVar2 = FUN_002f0d20(uVar2,3,0xc);
  FUN_003c9ab0(param_1,uVar2);
  if ((local_78[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return;
}


