/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ed1b4; name: FUN_001ed1b4
 */


int FUN_001ed1b4(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char acStack_b0 [80];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0xa28) == 0) {
    iVar2 = 0;
  }
  else {
    local_28 = param_2;
    iVar2 = FUN_001f21e4(*(undefined8 *)(param_1 + 0xa30),&local_60);
    if (iVar2 == 0) {
      uVar1 = *(int *)(param_1 + 0xa28) - 1;
      if (uVar1 < 3) {
        iVar2 = 6;
        if (iStack_48 != 0) {
          iVar2 = iStack_48 + -1;
        }
        FUN_001e64cc(acStack_b0,0x50,"%s: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                     (&PTR_s_If_Modified_Since_0411ce88)[(int)uVar1],
                     *(undefined8 *)(PTR_PTR_04372768 + (long)iVar2 * 8),local_54,
                     *(undefined8 *)(PTR_PTR_04372770 + (long)iStack_50 * 8),local_4c + 0x76c,
                     uStack_58,local_5c,local_60);
        sVar3 = strlen(acStack_b0);
        iVar2 = FUN_001ecbe4(&local_28,acStack_b0,sVar3);
      }
      else {
        iVar2 = 0x2b;
      }
    }
    else {
      FUN_001f3ae0(param_1,"Invalid TIMEVALUE");
    }
  }
  return iVar2;
}


