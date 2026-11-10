/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a67d8; name: FUN_027a67d8
 */


void FUN_027a67d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  char *__s;
  
  *param_1 = param_2;
  __s = (char *)((long)param_1 + 0xc25);
  memset(param_1 + 1,0,0xc2e);
  *(undefined1 *)((long)param_1 + 0xc3c) = 1;
  *(undefined1 *)((long)param_1 + 0xc36) = param_6;
  *(undefined1 *)((long)param_1 + 0xc37) = param_7;
  *(undefined4 *)(param_1 + 0x187) = 0;
  *(undefined1 *)(param_1 + 0x3ff) = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  memset(param_1 + 0x188,0,0x13a9);
  snprintf((char *)(param_1 + 1),0x1d,"%s",param_3);
  memset((char *)((long)param_1 + 0x25),0,0xc00);
  snprintf((char *)((long)param_1 + 0x25),0xc00,"%s",param_4);
  *(undefined1 *)((long)param_1 + 0xc35) = 0;
  __s[0] = '\0';
  __s[1] = '\0';
  __s[2] = '\0';
  __s[3] = '\0';
  __s[4] = '\0';
  __s[5] = '\0';
  __s[6] = '\0';
  __s[7] = '\0';
  *(undefined8 *)((long)param_1 + 0xc2d) = 0;
  snprintf(__s,0x11,"%s",param_5);
  memset(param_1 + 0x18c,0,5000);
  return;
}


