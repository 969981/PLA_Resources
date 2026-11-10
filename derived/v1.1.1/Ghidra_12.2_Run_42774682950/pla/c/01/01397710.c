/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01397710; name: FUN_01397710
 */


void FUN_01397710(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 unaff_w26;
  char local_2d8 [8];
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  
  FUN_0275d180(local_2d8);
  uVar3 = *(undefined1 *)(param_2 + 0xf);
  uVar2 = *(undefined4 *)(param_2 + 8);
  bVar4 = *(byte *)(param_2 + 0x13);
  uVar1 = 0;
  if (local_2d8[0] != '\0') {
    uVar1 = local_2d0;
  }
  switch(uVar3) {
  case 0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  case 1:
    unaff_w26 = *(undefined4 *)(param_2 + 0x18);
    memcpy(&local_2c8,(void *)(param_2 + 0x1c),0x264);
    break;
  case 2:
    local_2c8 = *(undefined8 *)(param_2 + 0x1c);
    uStack_2c0 = *(undefined8 *)(param_2 + 0x24);
    unaff_w26 = *(undefined4 *)(param_2 + 0x18);
    local_2b8 = CONCAT44(local_2b8._4_4_,*(undefined4 *)(param_2 + 0x2c));
    break;
  case 3:
    local_2c8 = *(undefined8 *)(param_2 + 0x1c);
    uStack_2c0 = *(undefined8 *)(param_2 + 0x24);
    local_2b8 = *(undefined8 *)(param_2 + 0x2c);
    uStack_2b0 = *(undefined8 *)(param_2 + 0x34);
    unaff_w26 = *(undefined4 *)(param_2 + 0x18);
    local_2a8 = *(undefined8 *)(param_2 + 0x3c);
    uStack_2a0 = *(undefined8 *)(param_2 + 0x44);
    local_298 = *(undefined8 *)(param_2 + 0x4c);
    uStack_290 = *(undefined8 *)(param_2 + 0x54);
    local_288 = *(undefined8 *)(param_2 + 0x5c);
    local_280 = *(undefined8 *)(param_2 + 100);
    uStack_278 = *(undefined8 *)(param_2 + 0x6c);
    local_270 = *(undefined4 *)(param_2 + 0x74);
    break;
  case 4:
    unaff_w26 = *(undefined4 *)(param_2 + 0x18);
  }
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(ushort *)(param_1 + 0x14) = (ushort)bVar4;
  param_1[0x16] = uVar3;
  *(undefined4 *)(param_1 + 0x18) = unaff_w26;
  memcpy(param_1 + 0x1c,&local_2c8,0x264);
  *param_1 = 1;
  return;
}


