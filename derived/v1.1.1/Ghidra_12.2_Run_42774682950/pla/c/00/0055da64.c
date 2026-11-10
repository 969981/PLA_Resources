/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055da64; name: FUN_0055da64
 */


void FUN_0055da64(char *param_1)

{
  char cVar1;
  byte *pbVar2;
  long lVar3;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [264];
  
  if (*(short *)(param_1 + 6) != 0) {
                    /* try { // try from 0055db48 to 0055db5f has its CatchHandler @ 0055db80 */
    FUN_0054f038(auStack_130,"external/com_github_google_re2/re2/regexp.cc",0x30);
                    /* try { // try from 0055db64 to 0055db6f has its CatchHandler @ 0055db78 */
    FUN_00551750(auStack_128,"Regexp not destroyed.");
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(auStack_130);
  }
  cVar1 = *param_1;
  if (cVar1 == '\x04') {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) {
      return;
    }
    FUN_002e2f10(lVar3);
    FUN_002e2ef0(PTR_LAB_04373088,lVar3);
    return;
  }
  if (cVar1 == '\x14') {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
      FUN_002e2f10(lVar3);
      FUN_002e2ef0(PTR_LAB_04373088,lVar3);
    }
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (pbVar2 == (byte *)0x0) {
      return;
    }
    FUN_00560e20(pbVar2 + 0x10,*(undefined8 *)(pbVar2 + 0x18));
  }
  else {
    if (cVar1 != '\v') {
      return;
    }
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (pbVar2 == (byte *)0x0) {
      return;
    }
    if ((*pbVar2 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar2 + 0x10));
    }
  }
  FUN_002e2ea0(PTR_LAB_04373088,pbVar2);
  return;
}


