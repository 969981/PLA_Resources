/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005597e4; name: FUN_005597e4
 */


undefined8 FUN_005597e4(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [264];
  
  uVar4 = *param_2;
  uVar5 = param_2[2];
  if (uVar5 <= uVar4) {
    pbVar2 = (byte *)(uVar4 + param_2[1]);
    if (pbVar2 <= (byte *)(uVar5 + param_2[3])) {
      if (*(char *)((long)param_2 + 0x23) == '\0') {
        if (pbVar2 == (byte *)(uVar5 + param_2[3])) goto LAB_00559880;
        bVar3 = *pbVar2;
        if (bVar3 != 10) goto LAB_00559860;
LAB_00559840:
        uVar6 = 1;
        uVar4 = 2;
      }
      else if (uVar4 == uVar5) {
LAB_00559880:
        uVar4 = 0;
        uVar6 = 5;
      }
      else {
        bVar3 = *(byte *)(uVar4 - 1);
        if (bVar3 == 10) goto LAB_00559840;
LAB_00559860:
        if ((((byte)((bVar3 & 0xdf) + 0xbf) < 0x1a) || (bVar3 == 0x5f)) ||
           ((byte)(bVar3 - 0x30) < 10)) {
          uVar6 = 0x200;
          uVar4 = 4;
        }
        else {
          uVar6 = 0;
          uVar4 = 6;
        }
      }
      puVar1 = (ulong *)(param_1 + (uVar4 | (byte)param_2[4]) + 0x1b);
      uVar4 = FUN_005599b0(param_1,param_2,puVar1,uVar6);
      if ((uVar4 & 1) != 0) {
LAB_005598d4:
        uVar4 = *puVar1;
        param_2[5] = uVar4;
        if (((*(long *)(*param_1 + 0x18) != 0) && (2 < uVar4)) &&
           (((char)param_2[4] == '\0' && (*(short *)(uVar4 + 0xe) == 0)))) {
          *(undefined1 *)((long)param_2 + 0x21) = 1;
        }
        return 1;
      }
      FUN_00558d9c(param_1,param_2[6]);
      uVar4 = FUN_005599b0(param_1,param_2,puVar1,uVar6);
      if ((uVar4 & 1) != 0) goto LAB_005598d4;
      FUN_0054f038(auStack_140,"external/com_github_google_re2/re2/dfa.cc",0x696);
                    /* try { // try from 0055998c to 00559997 has its CatchHandler @ 005599a0 */
      FUN_00551750(auStack_138,"Failed to analyze start state.");
      goto LAB_00559998;
    }
  }
  FUN_0054f038(auStack_140,"external/com_github_google_re2/re2/dfa.cc",0x667);
                    /* try { // try from 00559960 to 0055996b has its CatchHandler @ 005599a8 */
  FUN_00551750(auStack_138,"context does not contain text");
LAB_00559998:
                    /* WARNING: Subroutine does not return */
  FUN_005503fc(auStack_140);
}


