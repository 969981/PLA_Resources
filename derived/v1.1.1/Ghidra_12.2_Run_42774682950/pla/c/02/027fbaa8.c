/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027fbaa8; name: FUN_027fbaa8
 */


void FUN_027fbaa8(long param_1)

{
  ulong uVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_28;
  
  local_38 = (long *)0x0;
  local_50 = 0x757527f9d900520e;
  pcStack_48 = "Global";
  local_40 = 0x1f;
  local_28 = FUN_02b1f8b0(DAT_043ef5b0,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  uVar1 = FUN_02b21278(DAT_043ef5b0,&local_28);
  if ((uVar1 & 1) != 0) {
    local_50 = 0x8f457f2507b3ad8e;
    pcStack_48 = "BlurRadius";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    FUN_02b22400(DAT_043ef5b0,&local_28,&local_50,param_1 + 0x68);
    local_50 = 0x92ca7a8db907e0f3;
    pcStack_48 = "TMMaxBrightness";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    FUN_02b22400(DAT_043ef5b0,&local_28,&local_50,param_1 + 0x6c);
    local_50 = 0xb32127682c6356aa;
    pcStack_48 = "Gamma";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    FUN_02b22400(DAT_043ef5b0,&local_28,&local_50,param_1 + 0x70);
    local_50 = 0x44b34656e5a1e1f7;
    pcStack_48 = "ContrastMid";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    FUN_02b22400(DAT_043ef5b0,&local_28,&local_50,param_1 + 0x74);
    local_50 = 0x6c0b5b566ae36454;
    pcStack_48 = "ContrastVol";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    FUN_02b22400(DAT_043ef5b0,&local_28,&local_50,param_1 + 0x78);
    local_50 = 0x173ee12172cc7935;
    pcStack_48 = "CbCrScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    FUN_02b22400(DAT_043ef5b0,&local_28,&local_50,param_1 + 0x7c);
    local_50 = 0x67636b6fd0116193;
    pcStack_48 = "CbOffset";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    FUN_02b22400(DAT_043ef5b0,&local_28,&local_50,param_1 + 0x80);
    local_50 = 0xa3e290d7c5634fe3;
    pcStack_48 = "CrOffset";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    FUN_02b22400(DAT_043ef5b0,&local_28,&local_50,param_1 + 0x84);
    local_50 = 0x996fcf3eddb52bd4;
    pcStack_48 = "NoiseColor";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    FUN_02b2256c(DAT_043ef5b0,&local_28,&local_50,param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x9c);
  }
  return;
}


