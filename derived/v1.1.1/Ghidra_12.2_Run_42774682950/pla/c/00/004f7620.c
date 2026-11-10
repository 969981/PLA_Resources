/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f7620; name: FUN_004f7620
 */


undefined8 FUN_004f7620(uint *param_1,char *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint *puVar8;
  char *__s2;
  size_t __n;
  
  if (param_2 == (char *)0x0) {
    FUN_004014b0(0x14,0x14e,0x181,"external/openssl/ssl/ssl_conf.c",0x31c);
  }
  else {
    __s2 = *(char **)(param_1 + 2);
    if (__s2 == (char *)0x0) {
      uVar1 = *param_1;
      if ((uVar1 & 1) != 0) {
        if (*param_2 != '-') {
          return 0xfffffffe;
        }
        param_2 = param_2 + 1;
        if (*param_2 == '\0') {
          return 0xfffffffe;
        }
      }
      puVar5 = (undefined8 *)FUN_004f7870(param_1,param_2);
    }
    else {
      sVar4 = strlen(param_2);
      __n = *(size_t *)(param_1 + 4);
      if (sVar4 <= __n) {
        return 0xfffffffe;
      }
      uVar1 = *param_1;
      if (((uVar1 & 1) != 0) && (iVar3 = strncmp(param_2,__s2,__n), iVar3 != 0)) {
        return 0xfffffffe;
      }
      if (((uVar1 >> 1 & 1) != 0) && (iVar3 = strncasecmp(param_2,__s2,__n), iVar3 != 0)) {
        return 0xfffffffe;
      }
      param_2 = param_2 + __n;
      puVar5 = (undefined8 *)FUN_004f7870(param_1,param_2);
    }
    if (puVar5 == (undefined8 *)0x0) {
      if ((uVar1 >> 4 & 1) != 0) {
        FUN_004014b0(0x14,0x14e,0x182,"external/openssl/ssl/ssl_conf.c",0x339);
        FUN_00402170(2,&DAT_03954bce,param_2);
      }
      return 0xfffffffe;
    }
    if (*(short *)((long)puVar5 + 0x1a) == 4) {
      uVar7 = (long)(puVar5 + -0x8306f9) >> 5;
      if (uVar7 < 0x16) {
        puVar8 = param_1 + 10;
        if (*(long *)puVar8 == 0) {
          return 1;
        }
        uVar1 = *(uint *)(&DAT_03a28a98 + uVar7 * 0x10) & 0xf00;
        if (uVar1 != 0) {
          if (uVar1 == 0x200) {
            puVar8 = param_1 + 0x20;
          }
          else {
            if (uVar1 != 0x100) {
              return 1;
            }
            puVar8 = param_1 + 0x1e;
          }
        }
        uVar2 = **(uint **)puVar8;
        uVar1 = uVar2 | (uint)*(undefined8 *)(&DAT_03a28a90 + uVar7 * 0x10);
        if ((0x188080U >> (uVar7 & 0x3f) & 1) != 0) {
          uVar1 = uVar2 & ((uint)*(undefined8 *)(&DAT_03a28a90 + uVar7 * 0x10) ^ 0xffffffff);
        }
        **(uint **)puVar8 = uVar1;
        return 1;
      }
    }
    else {
      if (param_3 == 0) {
        return 0xfffffffd;
      }
      uVar6 = (*(code *)*puVar5)(param_1,param_3);
      if (0 < (int)uVar6) {
        return 2;
      }
      if ((int)uVar6 == -2) {
        return uVar6;
      }
      if (((byte)*param_1 >> 4 & 1) != 0) {
        FUN_004014b0(0x14,0x14e,0x180,"external/openssl/ssl/ssl_conf.c",0x332);
        FUN_00402170(4,&DAT_03954bce,param_2,", value=",param_3);
      }
    }
  }
  return 0;
}


