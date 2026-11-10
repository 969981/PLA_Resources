/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00607af0; name: FUN_00607af0
 */


/* WARNING: Removing unreachable block (ram,0x00607ba8) */

int FUN_00607af0(byte *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  uStack_58 = 0xffffff80ffffffd0;
  uStack_78 = 0xffffff80ffffffd0;
  local_e0 = param_3;
  uStack_d8 = param_4;
  local_d0 = param_5;
  uStack_c8 = param_6;
  local_c0 = param_7;
  uStack_b8 = param_8;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_b0;
  puStack_80 = &local_e0;
  local_70 = (undefined1 *)register0x00000008;
  ppuStack_68 = &local_b0;
  puStack_60 = &local_e0;
  iVar2 = vsnprintf((char *)0x0,0,param_2,&local_90);
  if (iVar2 < 1) {
    return iVar2;
  }
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
    uVar4 = uVar5 + (long)iVar2;
    lVar3 = uVar4 - uVar5;
    if (uVar5 <= uVar4 && lVar3 != 0) goto LAB_00607bbc;
LAB_00607b8c:
    if ((bVar1 & 1) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar4) = 0;
      *(ulong *)(param_1 + 8) = uVar4;
      bVar1 = *param_1;
      goto joined_r0x00607bcc;
    }
    param_1[uVar4 + 1] = 0;
    *param_1 = (byte)((int)uVar4 << 1);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    uVar4 = uVar5 + (long)iVar2;
    lVar3 = uVar4 - uVar5;
    if (uVar4 < uVar5 || lVar3 == 0) goto LAB_00607b8c;
LAB_00607bbc:
    FUN_002e6bd4(param_1,lVar3,0);
    bVar1 = *param_1;
joined_r0x00607bcc:
    if ((bVar1 & 1) != 0) {
      param_1 = *(byte **)(param_1 + 0x10);
      goto LAB_00607bf0;
    }
  }
  param_1 = param_1 + 1;
LAB_00607bf0:
  uStack_98 = 0xffffff80ffffffd0;
  local_b0 = (undefined1 *)register0x00000008;
  ppuStack_a8 = &local_b0;
  puStack_a0 = &local_e0;
  iVar2 = vsnprintf((char *)(param_1 + uVar5),(long)(iVar2 + 1),param_2,&local_b0);
  return iVar2;
}


