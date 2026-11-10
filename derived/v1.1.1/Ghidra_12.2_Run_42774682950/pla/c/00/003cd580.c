/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cd580; name: FUN_003cd580
 */


void FUN_003cd580(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_80 [16];
  ulong local_70;
  undefined8 local_68;
  undefined1 auStack_60 [32];
  undefined8 local_40;
  undefined *puStack_38;
  
  local_68 = 0;
  FUN_003f1110(param_2,&local_68);
  local_40 = local_68;
  puStack_38 = PTR_LAB_043737d8;
  FUN_002e6390(local_80,"Compression algorithm \'%s\' is disabled.",0x27,&local_40,1);
  uVar1 = (ulong)local_80 | 1;
  if ((local_80[0] & 1) != 0) {
    uVar1 = local_70;
  }
                    /* try { // try from 003cd5e8 to 003cd673 has its CatchHandler @ 003cd69c */
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x580,2,&DAT_038bd9bd,
               uVar1);
  uVar1 = (ulong)local_80 | 1;
  if ((local_80[0] & 1) != 0) {
    uVar1 = local_70;
  }
  FUN_002f2ff0(&local_40,uVar1);
  uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2d6,&local_40,
                       0,0);
  FUN_002f2ff0(auStack_60,uVar1);
  uVar2 = FUN_002f1340(uVar2,5,auStack_60);
  uVar2 = FUN_002f0d20(uVar2,3,0xc);
  FUN_003c9ab0(param_1,uVar2);
  if ((local_80[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  return;
}


