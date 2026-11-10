/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fd744; name: FUN_001fd744
 */


undefined8 FUN_001fd744(long *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *param_1;
  FUN_001f2dcc(lVar3,3);
  if ((*(byte *)(param_1[0x84] + 0x84) >> 4 & 1) == 0) {
    *param_2 = 0;
    *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xff7fffff;
    if (*(long *)(lVar3 + 0xdb0) != 0) {
      FUN_002044d4(param_1[0x8c]);
      param_1[0x8c] = 0;
      lVar1 = FUN_001e6534("User-Agent: %s\r\n",*(undefined8 *)(lVar3 + 0xdb0));
      param_1[0x8c] = lVar1;
      if (lVar1 == 0) {
        return 0x1b;
      }
    }
    *(undefined8 *)(lVar3 + 0x110) = 0;
    *(undefined8 *)(lVar3 + 0x14e8) = 0;
    auVar4 = FUN_001f8fb4();
    *(undefined1 (*) [16])(param_1 + 0x47) = auVar4;
    if ((int)param_1[0x4b] == -1) {
      *(undefined1 *)((long)param_1 + 0x3fa) = 0;
      uVar2 = FUN_001de51c(param_1,param_1[0xd]);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      FUN_001f2dcc(lVar3,4);
      FUN_001f2dcc(lVar3,5);
      *(undefined1 *)((long)param_1 + 0x3fa) = 1;
      *param_2 = 1;
      FUN_001ddd44(param_1,(int)param_1[0x4b]);
      FUN_001fd2e4(param_1);
    }
    auVar4 = FUN_001f8fb4();
    *(undefined1 (*) [16])(param_1 + 0x47) = auVar4;
  }
  else {
    *param_2 = 1;
  }
  return 0;
}


