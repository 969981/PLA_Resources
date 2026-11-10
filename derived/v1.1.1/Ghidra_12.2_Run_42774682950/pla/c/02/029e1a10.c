/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e1a10; name: FUN_029e1a10
 */


void FUN_029e1a10(long param_1,undefined1 *param_2,char *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 auStack_70 [8];
  long local_68;
  
  *param_2 = 0;
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)(byte)param_3[1] * 8 + 0x120)
  ;
  uVar5 = FUN_029506a8(lVar10,0x10);
  switch(uVar5 & 0xffff) {
  case 0xa1:
  case 0xb0:
  case 0xc5:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd5:
  case 0xe1:
  case 0xf1:
  case 0xf8:
  case 0x10a:
  case 0x10b:
    return;
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd4:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x109:
    goto switchD_029e1a88_caseD_a2;
  }
  if ((uVar5 & 0xffff) == 0x79) {
    return;
  }
switchD_029e1a88_caseD_a2:
  if (*(short *)(lVar10 + 0x74) == 0) {
    return;
  }
  if ((param_3[9] == '\0') && (*(uint *)(param_3 + 4) == uVar5)) {
    return;
  }
  uVar7 = FUN_02995448(*(undefined8 *)(param_1 + 0x38),param_3[1],*(uint *)(param_3 + 4),param_3[8])
  ;
  if ((param_3[0xb] != '\0') && (*param_3 != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*param_3,0);
  }
  if ((uVar7 & 1) == 0) {
    FUN_02995894(*(undefined8 *)(param_1 + 0x38),param_3[1],*(undefined4 *)(param_3 + 4),param_3[8])
    ;
    cVar3 = param_3[0xb];
  }
  else {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x6b,param_3[1],
                 *(undefined2 *)(param_3 + 4));
    FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 0xc);
    FUN_029948fc(*(undefined8 *)(param_1 + 0x38),param_3[1],uVar5,*(undefined4 *)(param_3 + 4));
    lVar12 = *(long *)(param_1 + 0x20);
    lVar8 = *(long *)(lVar12 + 0x20);
    bVar4 = *(byte *)(lVar10 + 0x7d);
    FUN_02a38210(*(undefined8 *)(lVar8 + 0x18),
                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x10) + 8) + (ulong)bVar4 * 8 + 0x120))
    ;
    FUN_02a3e6b8(*(undefined8 *)(lVar12 + 0x18),0x5b,(ulong)bVar4);
    lVar8 = *(long *)(param_1 + 0x20);
    bVar4 = param_3[1];
    uVar1 = *(uint *)(param_3 + 4);
    *(short *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0x10) + 8) + (ulong)bVar4 * 8
                        + 0x120) + 0x364) = (short)uVar1;
    FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x24,(ulong)bVar4,uVar1 & 0xffff);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined1 *)(lVar10 + 0x7d);
    uVar6 = FUN_029506a8(lVar10,0x10);
    FUN_02a3cc80(uVar11,uVar2,uVar6);
    bVar4 = FUN_029679e0(uVar13,uVar2,&local_68);
    if (bVar4 != 0) {
      uVar14 = (ulong)bVar4;
      plVar15 = &local_68;
      do {
        FUN_02a3cc80(uVar11,uVar2,(int)*plVar15);
        uVar14 = uVar14 - 1;
        plVar15 = (long *)((long)plVar15 + 4);
      } while (uVar14 != 0);
    }
    if (param_3[1] != '\x1f') {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
    }
    if (uVar5 != *(uint *)(param_3 + 4)) {
      FUN_02973d0c(*(undefined8 *)(param_1 + 0x38),param_3[1]);
    }
    *param_2 = 1;
    cVar3 = param_3[0xb];
  }
  if ((cVar3 != '\0') && (*param_3 != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((*(byte *)(lVar10 + 0x120) & 7) != 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0xc0);
  if ((uVar5 == 0x67) || (*(int *)(param_3 + 4) == 0x52)) {
    lVar9 = *(long *)(*(long *)(lVar8 + 0x60) + 800);
    lVar12 = *(long *)(*(long *)(*(long *)(lVar9 + 0x10) + 8) + (ulong)*(byte *)(lVar10 + 0x7d) * 8
                      + 0x120);
    if (*(short *)(lVar12 + 0x76) != 0) {
      FUN_029825a0(*(undefined8 *)(lVar9 + 0x38),lVar12,7);
    }
  }
  if (uVar5 == 0x7f) {
    local_68 = lVar10;
    FUN_029ea38c(*(undefined8 *)(*(long *)(lVar8 + 0x60) + 0x1360),auStack_70,&local_68);
    return;
  }
  return;
}


