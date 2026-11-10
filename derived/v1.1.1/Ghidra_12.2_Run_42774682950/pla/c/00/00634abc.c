/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00634abc; name: FUN_00634abc
 */


void * FUN_00634abc(long param_1,ulong param_2)

{
  undefined8 uVar1;
  void *__s;
  size_t __n;
  long lVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_2 < 8) {
    FUN_0030f640(auStack_50,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x3d1);
                    /* try { // try from 00634af0 to 00634b03 has its CatchHandler @ 00634bcc */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: n >= kMinTableSize: ");
                    /* try { // try from 00634b04 to 00634b0b has its CatchHandler @ 00634bc8 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  if ((param_2 & param_2 - 1) != 0) {
    FUN_0030f640(auStack_50,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x3d2);
                    /* try { // try from 00634b38 to 00634b4b has its CatchHandler @ 00634bc4 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: (n & (n - 1)) == (0): ");
                    /* try { // try from 00634b4c to 00634b53 has its CatchHandler @ 00634bc0 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  __n = param_2 << 3;
  if (lVar2 == 0) {
    __s = (void *)FUN_002ee6d0(__n);
  }
  else {
    if (*(long *)(lVar2 + 0x70) != 0) {
      FUN_0032cf88(lVar2,0,__n);
    }
    __s = (void *)FUN_0032cea0(lVar2,__n);
  }
  memset(__s,0,__n);
  return __s;
}


